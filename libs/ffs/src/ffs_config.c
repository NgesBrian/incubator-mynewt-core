#include "ffs/ffs.h"

struct ffs_config ffs_config;

const struct ffs_config ffs_config_dflt = {
    .fc_num_inodes = 100,
    .fc_num_blocks = 100,
    .fc_num_files = 16,
};

void
ffs_config_init(void)
{
    if (ffs_config.fc_num_inodes == 0) {
        ffs_config.fc_num_inodes = ffs_config_dflt.fc_num_inodes;
    }
    if (ffs_config.fc_num_blocks == 0) {
        ffs_config.fc_num_blocks = ffs_config_dflt.fc_num_blocks;
    }
    if (ffs_config.fc_num_files == 0) {
        ffs_config.fc_num_files = ffs_config_dflt.fc_num_files;
    }
}