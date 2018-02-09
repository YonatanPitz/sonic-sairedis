#include "sai_redis.h"

REDIS_GENERIC_QUAD(TABLE_PEERING_ENTRY, table_peering_entry);
REDIS_GENERIC_QUAD(TABLE_VHOST_ENTRY, table_vhost_entry);

const sai_bmtor_api_t redis_bmtor_api =
{
    REDIS_GENERIC_QUAD_API(table_peering_entry)
    REDIS_GENERIC_QUAD_API(table_vhost_entry)
};
