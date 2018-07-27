#include "sai_redis.h"

sai_status_t redis_clear_table_vhost_entry_stats(
        _In_ sai_object_id_t entry_id,
        _In_ uint32_t number_of_counters,
        _In_ const sai_table_vhost_entry_stat_t *counter_ids)
{
    MUTEX();

    SWSS_LOG_ENTER();

    return SAI_STATUS_NOT_IMPLEMENTED;
}

REDIS_GENERIC_QUAD(TABLE_PEERING_ENTRY, table_peering_entry);
REDIS_GENERIC_QUAD(TABLE_VHOST_ENTRY, table_vhost_entry);

REDIS_GENERIC_GET_STATS(TABLE_VHOST_ENTRY, table_vhost_entry);

const sai_bmtor_api_t redis_bmtor_api =
{
    REDIS_GENERIC_QUAD_API(table_peering_entry)
    REDIS_GENERIC_QUAD_API(table_vhost_entry)
    redis_get_table_vhost_entry_stats,
    redis_clear_table_vhost_entry_stats,
};
