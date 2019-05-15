// Copyright (C) 2019 Storj Labs, Inc.
// See LICENSE for copying information.

#include <stdlib.h>
#include "../headers/main.h"

// TODO: move into go?
void *ConvertValue(struct GoValue *val, char **err)
{
    switch (val->Type)
    {
    case IDVersionType:
        Unpack(val, err);
        return (void *)storj__libuplink__idversion__unpack(NULL, val->Size, val->Snapshot);
    default:
        *err = "unknown type";
        return NULL;
    }

    return NULL;
}