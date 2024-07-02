#pragma once

#include "bitbuf.h"

struct MoovInfo {
    char audio_codec;
    unsigned int audio_samplerate;
    char is_h265;
    uint8_t profile_idc;
    uint8_t level_idc;
    char *vps;
    uint16_t vps_length;
    char *sps;
    uint16_t sps_length;
    char *pps;
    uint16_t pps_length;
    uint16_t width;
    uint16_t height;
    uint32_t horizontal_resolution;
    uint32_t vertical_resolution;
    uint32_t creation_time;
    uint32_t timescale;
};

enum BufError write_header(struct BitBuf *ptr, struct MoovInfo *moov_info);
