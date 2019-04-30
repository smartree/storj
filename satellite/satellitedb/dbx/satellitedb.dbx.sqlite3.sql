-- AUTOGENERATED BY gopkg.in/spacemonkeygo/dbx.v1
-- DO NOT EDIT
CREATE TABLE accounting_raws (
	id INTEGER NOT NULL,
	node_id BLOB NOT NULL,
	interval_end_time TIMESTAMP NOT NULL,
	data_total REAL NOT NULL,
	data_type INTEGER NOT NULL,
	created_at TIMESTAMP NOT NULL,
	PRIMARY KEY ( id )
);
CREATE TABLE accounting_rollups (
	id INTEGER NOT NULL,
	node_id BLOB NOT NULL,
	start_time TIMESTAMP NOT NULL,
	put_total INTEGER NOT NULL,
	get_total INTEGER NOT NULL,
	get_audit_total INTEGER NOT NULL,
	get_repair_total INTEGER NOT NULL,
	put_repair_total INTEGER NOT NULL,
	at_rest_total REAL NOT NULL,
	PRIMARY KEY ( id )
);
CREATE TABLE accounting_timestamps (
	name TEXT NOT NULL,
	value TIMESTAMP NOT NULL,
	PRIMARY KEY ( name )
);
CREATE TABLE attributions (
	id BLOB NOT NULL,
	name TEXT NOT NULL,
	description TEXT NOT NULL,
	PRIMARY KEY ( id ),
	UNIQUE ( name )
);
CREATE TABLE bucket_bandwidth_rollups (
	bucket_name BLOB NOT NULL,
	project_id BLOB NOT NULL,
	interval_start TIMESTAMP NOT NULL,
	interval_seconds INTEGER NOT NULL,
	action INTEGER NOT NULL,
	inline INTEGER NOT NULL,
	allocated INTEGER NOT NULL,
	settled INTEGER NOT NULL,
	PRIMARY KEY ( bucket_name, project_id, interval_start, action )
);
CREATE TABLE bucket_storage_tallies (
	bucket_name BLOB NOT NULL,
	project_id BLOB NOT NULL,
	interval_start TIMESTAMP NOT NULL,
	inline INTEGER NOT NULL,
	remote INTEGER NOT NULL,
	remote_segments_count INTEGER NOT NULL,
	inline_segments_count INTEGER NOT NULL,
	object_count INTEGER NOT NULL,
	metadata_size INTEGER NOT NULL,
	PRIMARY KEY ( bucket_name, project_id, interval_start )
);
CREATE TABLE bucket_usages (
	id BLOB NOT NULL,
	bucket_id BLOB NOT NULL,
	rollup_end_time TIMESTAMP NOT NULL,
	remote_stored_data INTEGER NOT NULL,
	inline_stored_data INTEGER NOT NULL,
	remote_segments INTEGER NOT NULL,
	inline_segments INTEGER NOT NULL,
	objects INTEGER NOT NULL,
	metadata_size INTEGER NOT NULL,
	repair_egress INTEGER NOT NULL,
	get_egress INTEGER NOT NULL,
	audit_egress INTEGER NOT NULL,
	PRIMARY KEY ( id )
);
CREATE TABLE bwagreements (
	serialnum TEXT NOT NULL,
	storage_node_id BLOB NOT NULL,
	uplink_id BLOB NOT NULL,
	action INTEGER NOT NULL,
	total INTEGER NOT NULL,
	created_at TIMESTAMP NOT NULL,
	expires_at TIMESTAMP NOT NULL,
	PRIMARY KEY ( serialnum )
);
CREATE TABLE certRecords (
	publickey BLOB NOT NULL,
	id BLOB NOT NULL,
	update_at TIMESTAMP NOT NULL,
	PRIMARY KEY ( id )
);
CREATE TABLE injuredsegments (
	path TEXT NOT NULL,
	data BLOB NOT NULL,
	attempted TIMESTAMP,
	PRIMARY KEY ( path )
);
CREATE TABLE irreparabledbs (
	segmentpath BLOB NOT NULL,
	segmentdetail BLOB NOT NULL,
	pieces_lost_count INTEGER NOT NULL,
	seg_damaged_unix_sec INTEGER NOT NULL,
	repair_attempt_count INTEGER NOT NULL,
	PRIMARY KEY ( segmentpath )
);
CREATE TABLE nodes (
	id BLOB NOT NULL,
	address TEXT NOT NULL,
	protocol INTEGER NOT NULL,
	type INTEGER NOT NULL,
	email TEXT NOT NULL,
	wallet TEXT NOT NULL,
	free_bandwidth INTEGER NOT NULL,
	free_disk INTEGER NOT NULL,
	major INTEGER NOT NULL,
	minor INTEGER NOT NULL,
	patch INTEGER NOT NULL,
	hash TEXT NOT NULL,
	timestamp TIMESTAMP NOT NULL,
	release INTEGER NOT NULL,
	latency_90 INTEGER NOT NULL,
	audit_success_count INTEGER NOT NULL,
	total_audit_count INTEGER NOT NULL,
	audit_success_ratio REAL NOT NULL,
	uptime_success_count INTEGER NOT NULL,
	total_uptime_count INTEGER NOT NULL,
	uptime_ratio REAL NOT NULL,
	created_at TIMESTAMP NOT NULL,
	updated_at TIMESTAMP NOT NULL,
	last_contact_success TIMESTAMP NOT NULL,
	last_contact_failure TIMESTAMP NOT NULL,
	PRIMARY KEY ( id )
);
CREATE TABLE projects (
	id BLOB NOT NULL,
	name TEXT NOT NULL,
	description TEXT NOT NULL,
	created_at TIMESTAMP NOT NULL,
	PRIMARY KEY ( id )
);
CREATE TABLE registration_tokens (
	secret BLOB NOT NULL,
	owner_id BLOB,
	project_limit INTEGER NOT NULL,
	created_at TIMESTAMP NOT NULL,
	PRIMARY KEY ( secret ),
	UNIQUE ( owner_id )
);
CREATE TABLE serial_numbers (
	id INTEGER NOT NULL,
	serial_number BLOB NOT NULL,
	bucket_id BLOB NOT NULL,
	expires_at TIMESTAMP NOT NULL,
	PRIMARY KEY ( id )
);
CREATE TABLE storagenode_bandwidth_rollups (
	storagenode_id BLOB NOT NULL,
	interval_start TIMESTAMP NOT NULL,
	interval_seconds INTEGER NOT NULL,
	action INTEGER NOT NULL,
	allocated INTEGER NOT NULL,
	settled INTEGER NOT NULL,
	PRIMARY KEY ( storagenode_id, interval_start, action )
);
CREATE TABLE storagenode_storage_tallies (
	storagenode_id BLOB NOT NULL,
	interval_start TIMESTAMP NOT NULL,
	total INTEGER NOT NULL,
	PRIMARY KEY ( storagenode_id, interval_start )
);
CREATE TABLE users (
	id BLOB NOT NULL,
	full_name TEXT NOT NULL,
	short_name TEXT,
	email TEXT NOT NULL,
	password_hash BLOB NOT NULL,
	status INTEGER NOT NULL,
	created_at TIMESTAMP NOT NULL,
	PRIMARY KEY ( id )
);
CREATE TABLE api_keys (
	id BLOB NOT NULL,
	project_id BLOB NOT NULL REFERENCES projects( id ) ON DELETE CASCADE,
	key BLOB NOT NULL,
	name TEXT NOT NULL,
	created_at TIMESTAMP NOT NULL,
	PRIMARY KEY ( id ),
	UNIQUE ( key ),
	UNIQUE ( name, project_id )
);
CREATE TABLE buckets (
	id BLOB NOT NULL,
	project_id BLOB NOT NULL REFERENCES projects( id ),
	name BLOB NOT NULL,
	path_cipher INTEGER NOT NULL,
	attribution_id BLOB REFERENCES attributions( id ) ON DELETE SET NULL,
	created_at TIMESTAMP NOT NULL,
	default_segment_size INTEGER NOT NULL,
	default_encryption_cipher_suite INTEGER NOT NULL,
	default_encryption_block_size INTEGER NOT NULL,
	default_redundancy_algorithm INTEGER NOT NULL,
	default_redundancy_share_size INTEGER NOT NULL,
	default_redundancy_required_shares INTEGER NOT NULL,
	default_redundancy_repair_shares INTEGER NOT NULL,
	default_redundancy_optimal_shares INTEGER NOT NULL,
	default_redundancy_total_shares INTEGER NOT NULL,
	PRIMARY KEY ( id ),
	UNIQUE ( name, project_id )
);
CREATE TABLE project_members (
	member_id BLOB NOT NULL REFERENCES users( id ) ON DELETE CASCADE,
	project_id BLOB NOT NULL REFERENCES projects( id ) ON DELETE CASCADE,
	created_at TIMESTAMP NOT NULL,
	PRIMARY KEY ( member_id, project_id )
);
CREATE TABLE used_serials (
	serial_number_id INTEGER NOT NULL REFERENCES serial_numbers( id ) ON DELETE CASCADE,
	storage_node_id BLOB NOT NULL,
	PRIMARY KEY ( serial_number_id, storage_node_id )
);
CREATE TABLE objects (
	bucket_id BLOB NOT NULL REFERENCES buckets( id ) ON DELETE CASCADE,
	encrypted_path BLOB NOT NULL,
	version INTEGER NOT NULL,
	status INTEGER NOT NULL,
	stream_id BLOB NOT NULL,
	encrypted_metadata BLOB NOT NULL,
	total_size INTEGER NOT NULL,
	inline_size INTEGER NOT NULL,
	remote_size INTEGER NOT NULL,
	created_at TIMESTAMP NOT NULL,
	expires_at TIMESTAMP NOT NULL,
	fixed_segment_size INTEGER NOT NULL,
	encryption_cipher_suite INTEGER NOT NULL,
	encryption_block_size INTEGER NOT NULL,
	redundancy_algorithm INTEGER NOT NULL,
	redundancy_share_size INTEGER NOT NULL,
	redundancy_required_shares INTEGER NOT NULL,
	redundancy_repair_shares INTEGER NOT NULL,
	redundancy_optimal_shares INTEGER NOT NULL,
	redundancy_total_shares INTEGER NOT NULL,
	PRIMARY KEY ( bucket_id, encrypted_path, version )
);
CREATE TABLE segments (
	stream_id BLOB NOT NULL REFERENCES objects( stream_id ),
	segment_index INTEGER NOT NULL,
	root_piece_id BLOB NOT NULL,
	encrypted_key_nonce BLOB NOT NULL,
	encrypted_key BLOB NOT NULL,
	segment_checksum INTEGER NOT NULL,
	segment_size INTEGER NOT NULL,
	encrypted_inline_data BLOB NOT NULL,
	nodes BLOB NOT NULL,
	PRIMARY KEY ( stream_id, segment_index )
);
CREATE INDEX bucket_name_project_id_interval_start_interval_seconds ON bucket_bandwidth_rollups ( bucket_name, project_id, interval_start, interval_seconds );
CREATE UNIQUE INDEX bucket_id_rollup ON bucket_usages ( bucket_id, rollup_end_time );
CREATE UNIQUE INDEX serial_number ON serial_numbers ( serial_number );
CREATE INDEX serial_numbers_expires_at_index ON serial_numbers ( expires_at );
CREATE INDEX storagenode_id_interval_start_interval_seconds ON storagenode_bandwidth_rollups ( storagenode_id, interval_start, interval_seconds );
