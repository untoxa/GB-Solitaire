#include <gbdk/platform.h>
#include <gbdk/metasprites.h>

#include "regular_metasprite.h"

const metasprite_t metasprite_sequential_2x3[] = {
	METASPR_ITEM(DEVICE_SPRITE_PX_OFFSET_Y, DEVICE_SPRITE_PX_OFFSET_X, 0, 0), METASPR_ITEM(0, 8, 1, 0),
	METASPR_ITEM(                        8,                        -8, 2, 0), METASPR_ITEM(0, 8, 3, 0),
	METASPR_ITEM(                        8,                        -8, 4, 0), METASPR_ITEM(0, 8, 5, 0),
	METASPR_TERM
};

metasprite_t metasprite_custom_2x3[] = {
	METASPR_ITEM(DEVICE_SPRITE_PX_OFFSET_Y, DEVICE_SPRITE_PX_OFFSET_X, 0, 0), METASPR_ITEM(0, 8, 0, 0),
	METASPR_ITEM(                        8,                        -8, 0, 0), METASPR_ITEM(0, 8, 0, 0),
	METASPR_ITEM(                        8,                        -8, 0, 0), METASPR_ITEM(0, 8, 0, 0),
	METASPR_TERM
};
