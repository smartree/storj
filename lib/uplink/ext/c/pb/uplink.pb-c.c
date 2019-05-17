/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: uplink.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "uplink.pb-c.h"
void   storj__libuplink__idversion__init
                     (Storj__Libuplink__IDVersion         *message)
{
  static const Storj__Libuplink__IDVersion init_value = STORJ__LIBUPLINK__IDVERSION__INIT;
  *message = init_value;
}
size_t storj__libuplink__idversion__get_packed_size
                     (const Storj__Libuplink__IDVersion *message)
{
  assert(message->base.descriptor == &storj__libuplink__idversion__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t storj__libuplink__idversion__pack
                     (const Storj__Libuplink__IDVersion *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &storj__libuplink__idversion__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t storj__libuplink__idversion__pack_to_buffer
                     (const Storj__Libuplink__IDVersion *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &storj__libuplink__idversion__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Storj__Libuplink__IDVersion *
       storj__libuplink__idversion__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Storj__Libuplink__IDVersion *)
     protobuf_c_message_unpack (&storj__libuplink__idversion__descriptor,
                                allocator, len, data);
}
void   storj__libuplink__idversion__free_unpacked
                     (Storj__Libuplink__IDVersion *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &storj__libuplink__idversion__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   storj__libuplink__tlsconfig__init
                     (Storj__Libuplink__TLSConfig         *message)
{
  static const Storj__Libuplink__TLSConfig init_value = STORJ__LIBUPLINK__TLSCONFIG__INIT;
  *message = init_value;
}
size_t storj__libuplink__tlsconfig__get_packed_size
                     (const Storj__Libuplink__TLSConfig *message)
{
  assert(message->base.descriptor == &storj__libuplink__tlsconfig__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t storj__libuplink__tlsconfig__pack
                     (const Storj__Libuplink__TLSConfig *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &storj__libuplink__tlsconfig__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t storj__libuplink__tlsconfig__pack_to_buffer
                     (const Storj__Libuplink__TLSConfig *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &storj__libuplink__tlsconfig__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Storj__Libuplink__TLSConfig *
       storj__libuplink__tlsconfig__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Storj__Libuplink__TLSConfig *)
     protobuf_c_message_unpack (&storj__libuplink__tlsconfig__descriptor,
                                allocator, len, data);
}
void   storj__libuplink__tlsconfig__free_unpacked
                     (Storj__Libuplink__TLSConfig *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &storj__libuplink__tlsconfig__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   storj__libuplink__uplink_config__init
                     (Storj__Libuplink__UplinkConfig         *message)
{
  static const Storj__Libuplink__UplinkConfig init_value = STORJ__LIBUPLINK__UPLINK_CONFIG__INIT;
  *message = init_value;
}
size_t storj__libuplink__uplink_config__get_packed_size
                     (const Storj__Libuplink__UplinkConfig *message)
{
  assert(message->base.descriptor == &storj__libuplink__uplink_config__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t storj__libuplink__uplink_config__pack
                     (const Storj__Libuplink__UplinkConfig *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &storj__libuplink__uplink_config__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t storj__libuplink__uplink_config__pack_to_buffer
                     (const Storj__Libuplink__UplinkConfig *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &storj__libuplink__uplink_config__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Storj__Libuplink__UplinkConfig *
       storj__libuplink__uplink_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Storj__Libuplink__UplinkConfig *)
     protobuf_c_message_unpack (&storj__libuplink__uplink_config__descriptor,
                                allocator, len, data);
}
void   storj__libuplink__uplink_config__free_unpacked
                     (Storj__Libuplink__UplinkConfig *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &storj__libuplink__uplink_config__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor storj__libuplink__idversion__field_descriptors[2] =
{
  {
    "number",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Storj__Libuplink__IDVersion, number),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "new_private_key",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Storj__Libuplink__IDVersion, new_private_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned storj__libuplink__idversion__field_indices_by_name[] = {
  1,   /* field[1] = new_private_key */
  0,   /* field[0] = number */
};
static const ProtobufCIntRange storj__libuplink__idversion__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor storj__libuplink__idversion__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "storj.libuplink.IDVersion",
  "IDVersion",
  "Storj__Libuplink__IDVersion",
  "storj.libuplink",
  sizeof(Storj__Libuplink__IDVersion),
  2,
  storj__libuplink__idversion__field_descriptors,
  storj__libuplink__idversion__field_indices_by_name,
  1,  storj__libuplink__idversion__number_ranges,
  (ProtobufCMessageInit) storj__libuplink__idversion__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor storj__libuplink__tlsconfig__field_descriptors[2] =
{
  {
    "skip_peer_ca_whitelist",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Storj__Libuplink__TLSConfig, skip_peer_ca_whitelist),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "peer_ca_whitelist_path",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Storj__Libuplink__TLSConfig, peer_ca_whitelist_path),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned storj__libuplink__tlsconfig__field_indices_by_name[] = {
  1,   /* field[1] = peer_ca_whitelist_path */
  0,   /* field[0] = skip_peer_ca_whitelist */
};
static const ProtobufCIntRange storj__libuplink__tlsconfig__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor storj__libuplink__tlsconfig__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "storj.libuplink.TLSConfig",
  "TLSConfig",
  "Storj__Libuplink__TLSConfig",
  "storj.libuplink",
  sizeof(Storj__Libuplink__TLSConfig),
  2,
  storj__libuplink__tlsconfig__field_descriptors,
  storj__libuplink__tlsconfig__field_indices_by_name,
  1,  storj__libuplink__tlsconfig__number_ranges,
  (ProtobufCMessageInit) storj__libuplink__tlsconfig__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor storj__libuplink__uplink_config__field_descriptors[5] =
{
  {
    "tls",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Storj__Libuplink__UplinkConfig, tls),
    &storj__libuplink__tlsconfig__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "identity_version",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Storj__Libuplink__UplinkConfig, identity_version),
    &storj__libuplink__idversion__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "peer_id_version",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Storj__Libuplink__UplinkConfig, peer_id_version),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "max_inline_size",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Storj__Libuplink__UplinkConfig, max_inline_size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "max_memory",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Storj__Libuplink__UplinkConfig, max_memory),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned storj__libuplink__uplink_config__field_indices_by_name[] = {
  1,   /* field[1] = identity_version */
  3,   /* field[3] = max_inline_size */
  4,   /* field[4] = max_memory */
  2,   /* field[2] = peer_id_version */
  0,   /* field[0] = tls */
};
static const ProtobufCIntRange storj__libuplink__uplink_config__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor storj__libuplink__uplink_config__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "storj.libuplink.UplinkConfig",
  "UplinkConfig",
  "Storj__Libuplink__UplinkConfig",
  "storj.libuplink",
  sizeof(Storj__Libuplink__UplinkConfig),
  5,
  storj__libuplink__uplink_config__field_descriptors,
  storj__libuplink__uplink_config__field_indices_by_name,
  1,  storj__libuplink__uplink_config__number_ranges,
  (ProtobufCMessageInit) storj__libuplink__uplink_config__init,
  NULL,NULL,NULL    /* reserved[123] */
};
