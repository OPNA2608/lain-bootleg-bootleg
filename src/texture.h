#pragma once

#include "vector2d.h"

typedef enum {
	LAIN_ROOM,

	LAIN_DEFAULT_STANDING,

	LAIN_DEFAULT_LEAVE_1,
	LAIN_DEFAULT_LEAVE_2,
	LAIN_DEFAULT_LEAVE_3,
	LAIN_DEFAULT_LEAVE_4,
	LAIN_DEFAULT_LEAVE_5,
	LAIN_DEFAULT_LEAVE_6,
	LAIN_DEFAULT_LEAVE_7,
	LAIN_DEFAULT_LEAVE_8,
	LAIN_DEFAULT_LEAVE_9,
	LAIN_DEFAULT_LEAVE_10,
	LAIN_DEFAULT_LEAVE_11,

	LAIN_DEFAULT_WALK_LEFT_1,
	LAIN_DEFAULT_WALK_LEFT_2,
	LAIN_DEFAULT_WALK_LEFT_3,
	LAIN_DEFAULT_WALK_LEFT_4,
	LAIN_DEFAULT_WALK_LEFT_5,
	LAIN_DEFAULT_WALK_LEFT_6,
	LAIN_DEFAULT_WALK_LEFT_7,
	LAIN_DEFAULT_WALK_LEFT_8,

	LAIN_SCHOOL_LEAVE_1,
	LAIN_SCHOOL_LEAVE_2,
	LAIN_SCHOOL_LEAVE_3,
	LAIN_SCHOOL_LEAVE_4,
	LAIN_SCHOOL_LEAVE_5,
	LAIN_SCHOOL_LEAVE_6,
	LAIN_SCHOOL_LEAVE_7,
	LAIN_SCHOOL_LEAVE_8,
	LAIN_SCHOOL_LEAVE_9,
	LAIN_SCHOOL_LEAVE_10,
	LAIN_SCHOOL_LEAVE_11,

	LAIN_SCHOOL_WALK_LEFT_1,
	LAIN_SCHOOL_WALK_LEFT_2,
	LAIN_SCHOOL_WALK_LEFT_3,
	LAIN_SCHOOL_WALK_LEFT_4,
	LAIN_SCHOOL_WALK_LEFT_5,
	LAIN_SCHOOL_WALK_LEFT_6,
	LAIN_SCHOOL_WALK_LEFT_7,
	LAIN_SCHOOL_WALK_LEFT_8,

	LAIN_CYBERIA_LEAVE_1,
	LAIN_CYBERIA_LEAVE_2,
	LAIN_CYBERIA_LEAVE_3,
	LAIN_CYBERIA_LEAVE_4,
	LAIN_CYBERIA_LEAVE_5,
	LAIN_CYBERIA_LEAVE_6,
	LAIN_CYBERIA_LEAVE_7,
	LAIN_CYBERIA_LEAVE_8,
	LAIN_CYBERIA_LEAVE_9,
	LAIN_CYBERIA_LEAVE_10,
	LAIN_CYBERIA_LEAVE_11,

	LAIN_CYBERIA_WALK_LEFT_1,
	LAIN_CYBERIA_WALK_LEFT_2,
	LAIN_CYBERIA_WALK_LEFT_3,
	LAIN_CYBERIA_WALK_LEFT_4,
	LAIN_CYBERIA_WALK_LEFT_5,
	LAIN_CYBERIA_WALK_LEFT_6,
	LAIN_CYBERIA_WALK_LEFT_7,
	LAIN_CYBERIA_WALK_LEFT_8,

	LAIN_BEAR_LEAVE_1,
	LAIN_BEAR_LEAVE_2,
	LAIN_BEAR_LEAVE_3,
	LAIN_BEAR_LEAVE_4,
	LAIN_BEAR_LEAVE_5,
	LAIN_BEAR_LEAVE_6,
	LAIN_BEAR_LEAVE_7,
	LAIN_BEAR_LEAVE_8,
	LAIN_BEAR_LEAVE_9,
	LAIN_BEAR_LEAVE_10,
	LAIN_BEAR_LEAVE_11,

	LAIN_BEAR_WALK_LEFT_1,
	LAIN_BEAR_WALK_LEFT_2,
	LAIN_BEAR_WALK_LEFT_3,
	LAIN_BEAR_WALK_LEFT_4,
	LAIN_BEAR_WALK_LEFT_5,
	LAIN_BEAR_WALK_LEFT_6,
	LAIN_BEAR_WALK_LEFT_7,
	LAIN_BEAR_WALK_LEFT_8,

	LAIN_SWEATER_LEAVE_1,
	LAIN_SWEATER_LEAVE_2,
	LAIN_SWEATER_LEAVE_3,
	LAIN_SWEATER_LEAVE_4,
	LAIN_SWEATER_LEAVE_5,
	LAIN_SWEATER_LEAVE_6,
	LAIN_SWEATER_LEAVE_7,
	LAIN_SWEATER_LEAVE_8,
	LAIN_SWEATER_LEAVE_9,
	LAIN_SWEATER_LEAVE_10,
	LAIN_SWEATER_LEAVE_11,

	LAIN_SWEATER_WALK_LEFT_1,
	LAIN_SWEATER_WALK_LEFT_2,
	LAIN_SWEATER_WALK_LEFT_3,
	LAIN_SWEATER_WALK_LEFT_4,
	LAIN_SWEATER_WALK_LEFT_5,
	LAIN_SWEATER_WALK_LEFT_6,
	LAIN_SWEATER_WALK_LEFT_7,
	LAIN_SWEATER_WALK_LEFT_8,

	LAIN_ALIEN_STANDING,

	LAIN_ALIEN_LEAVE_1,
	LAIN_ALIEN_LEAVE_2,
	LAIN_ALIEN_LEAVE_3,
	LAIN_ALIEN_LEAVE_4,
	LAIN_ALIEN_LEAVE_5,
	LAIN_ALIEN_LEAVE_6,
	LAIN_ALIEN_LEAVE_7,
	LAIN_ALIEN_LEAVE_8,
	LAIN_ALIEN_LEAVE_9,

	LAIN_ALIEN_WALK_LEFT_1,
	LAIN_ALIEN_WALK_LEFT_2,
	LAIN_ALIEN_WALK_LEFT_3,
	LAIN_ALIEN_WALK_LEFT_4,
	LAIN_ALIEN_WALK_LEFT_5,
	LAIN_ALIEN_WALK_LEFT_6,
	LAIN_ALIEN_WALK_LEFT_7,
	LAIN_ALIEN_WALK_LEFT_8,

	LAIN_SCHOOL_STANDING,

	LAIN_CYBERIA_STANDING,

	LAIN_BEAR_STANDING,

	LAIN_SWEATER_STANDING,

	SCHOOL_OUTFIT,

	CYBERIA_OUTFIT,

	BEAR_OUTFIT,

	SWEATER_OUTFIT,

	CLASSROOM_BG,

	LAIN_CLASSROOM_1,
	LAIN_CLASSROOM_2,
	LAIN_CLASSROOM_3,
	LAIN_CLASSROOM_4,
	LAIN_CLASSROOM_5,
	LAIN_CLASSROOM_6,
	LAIN_CLASSROOM_7,
	LAIN_CLASSROOM_8,
	LAIN_CLASSROOM_9,
	LAIN_CLASSROOM_10,
	LAIN_CLASSROOM_11,
	LAIN_CLASSROOM_12,
	LAIN_CLASSROOM_13,
	LAIN_CLASSROOM_14,
	LAIN_CLASSROOM_15,
	LAIN_CLASSROOM_16,
	LAIN_CLASSROOM_17,
	LAIN_CLASSROOM_18,
	LAIN_CLASSROOM_19,
	LAIN_CLASSROOM_20,
	LAIN_CLASSROOM_21,
	LAIN_CLASSROOM_22,
	LAIN_CLASSROOM_23,
	LAIN_CLASSROOM_24,
	LAIN_CLASSROOM_25,
	LAIN_CLASSROOM_26,
	LAIN_CLASSROOM_27,
	LAIN_CLASSROOM_28,
	LAIN_CLASSROOM_29,
	LAIN_CLASSROOM_30,
	LAIN_CLASSROOM_31,

	CLASSROOM_TABLES,

	SCHOOL_BG,

	SCHOOL_EXPLOSION_1,
	SCHOOL_EXPLOSION_2,
	SCHOOL_EXPLOSION_3,
	SCHOOL_EXPLOSION_4,
	SCHOOL_EXPLOSION_5,
	SCHOOL_EXPLOSION_6,
	SCHOOL_EXPLOSION_7,
	SCHOOL_EXPLOSION_8,
	SCHOOL_EXPLOSION_9,
	SCHOOL_EXPLOSION_10,
	SCHOOL_EXPLOSION_11,
	SCHOOL_EXPLOSION_12,
	SCHOOL_EXPLOSION_13,
	SCHOOL_EXPLOSION_14,
	SCHOOL_EXPLOSION_15,
	SCHOOL_EXPLOSION_16,

	SCHOOL_LAIN_1,
	SCHOOL_LAIN_2,
	SCHOOL_LAIN_3,
	SCHOOL_LAIN_4,
	SCHOOL_LAIN_5,
	SCHOOL_LAIN_6,
	SCHOOL_LAIN_7,
	SCHOOL_LAIN_8,
	SCHOOL_LAIN_9,
	SCHOOL_LAIN_10,
	SCHOOL_LAIN_11,
	SCHOOL_LAIN_12,
	SCHOOL_LAIN_13,
	SCHOOL_LAIN_14,
	SCHOOL_LAIN_15,
	SCHOOL_LAIN_16,
	SCHOOL_LAIN_17,
	SCHOOL_LAIN_18,
	SCHOOL_LAIN_19,
	SCHOOL_LAIN_20,

	LAIN_ROOM_NIGHT_WINDOW,

	LAIN_ROOM_NIGHT_CHISA_1,
	LAIN_ROOM_NIGHT_CHISA_2,

	LAIN_ROOM_NIGHT_BG_EMPTY_WINDOW,

	LAIN_ROOM_NIGHT_LAIN_1,
	LAIN_ROOM_NIGHT_LAIN_2,
	LAIN_ROOM_NIGHT_LAIN_3,
	LAIN_ROOM_NIGHT_LAIN_4,
	LAIN_ROOM_NIGHT_LAIN_5,
	LAIN_ROOM_NIGHT_LAIN_6,
	LAIN_ROOM_NIGHT_LAIN_7,
	LAIN_ROOM_NIGHT_LAIN_8,
	LAIN_ROOM_NIGHT_LAIN_9,
	LAIN_ROOM_NIGHT_LAIN_10,
	LAIN_ROOM_NIGHT_LAIN_11,
	LAIN_ROOM_NIGHT_LAIN_12,
	LAIN_ROOM_NIGHT_LAIN_13,
	LAIN_ROOM_NIGHT_LAIN_14,
	LAIN_ROOM_NIGHT_LAIN_15,
	LAIN_ROOM_NIGHT_LAIN_16,
	LAIN_ROOM_NIGHT_LAIN_17,
	LAIN_ROOM_NIGHT_LAIN_18,
	LAIN_ROOM_NIGHT_LAIN_19,
	LAIN_ROOM_NIGHT_LAIN_20,
	LAIN_ROOM_NIGHT_LAIN_21,
	LAIN_ROOM_NIGHT_LAIN_22,
	LAIN_ROOM_NIGHT_LAIN_23,
	LAIN_ROOM_NIGHT_LAIN_24,
	LAIN_ROOM_NIGHT_LAIN_25,
	LAIN_ROOM_NIGHT_LAIN_26,
	LAIN_ROOM_NIGHT_LAIN_27,
	LAIN_ROOM_NIGHT_LAIN_28,
	LAIN_ROOM_NIGHT_LAIN_29,

	LAIN_ROOM_NIGHT_SLIPPERS,

	ARISU_ROOM_BG_1,
	ARISU_ROOM_BG_2,
	ARISU_ROOM_BG_3,

	ARISU_ROOM_DOOR_1,
	ARISU_ROOM_DOOR_2,
	ARISU_ROOM_DOOR_3,
	ARISU_ROOM_DOOR_4,

	ARISU_ROOM_UFO,

	ARISU_ROOM_LAIN_1,
	ARISU_ROOM_LAIN_2,
	ARISU_ROOM_LAIN_3,
	ARISU_ROOM_LAIN_4,
	ARISU_ROOM_LAIN_5,
	ARISU_ROOM_LAIN_6,
	ARISU_ROOM_LAIN_7,
	ARISU_ROOM_LAIN_8,
	ARISU_ROOM_LAIN_9,
	ARISU_ROOM_LAIN_10,
	ARISU_ROOM_LAIN_11,
	ARISU_ROOM_LAIN_12,
	ARISU_ROOM_LAIN_13,
	ARISU_ROOM_LAIN_14,
	ARISU_ROOM_LAIN_15,
	ARISU_ROOM_LAIN_16,

	CYBERIA_BG,

	CYBERIA_JJ_1,
	CYBERIA_JJ_2,

	CYBERIA_LAIN_1,
	CYBERIA_LAIN_2,
	CYBERIA_LAIN_3,
	CYBERIA_LAIN_4,
	CYBERIA_LAIN_5,
	CYBERIA_LAIN_6,
	CYBERIA_LAIN_7,
	CYBERIA_LAIN_8,
	CYBERIA_LAIN_9,

	STREET_BG_1,
	STREET_BG_2,

	STREET_EIRI_1,
	STREET_EIRI_2,
	STREET_EIRI_3,
	STREET_EIRI_4,
	STREET_EIRI_5,
	STREET_EIRI_6,
	STREET_EIRI_7,
	STREET_EIRI_8,
	STREET_EIRI_9,
	STREET_EIRI_10,
	STREET_EIRI_11,
	STREET_EIRI_12,
	STREET_EIRI_13,
	STREET_EIRI_14,

	STREET_LAIN_1,
	STREET_LAIN_2,
	STREET_LAIN_3,
	STREET_LAIN_4,
	STREET_LAIN_5,
	STREET_LAIN_6,
	STREET_LAIN_7,
	STREET_LAIN_8,

	STREET_LAIN_AND_EIRI_1,
	STREET_LAIN_AND_EIRI_2,
	STREET_LAIN_AND_EIRI_3,
	STREET_LAIN_AND_EIRI_4,
	STREET_LAIN_AND_EIRI_5,
	STREET_LAIN_AND_EIRI_6,
	STREET_LAIN_AND_EIRI_7,
	STREET_LAIN_AND_EIRI_8,
	STREET_LAIN_AND_EIRI_9,
	STREET_LAIN_AND_EIRI_10,
	STREET_LAIN_AND_EIRI_11,
	STREET_LAIN_AND_EIRI_12,
	STREET_LAIN_AND_EIRI_13,
	STREET_LAIN_AND_EIRI_14,
	STREET_LAIN_AND_EIRI_15,
	STREET_LAIN_AND_EIRI_16,
	STREET_LAIN_AND_EIRI_17,
	STREET_LAIN_AND_EIRI_18,
	STREET_LAIN_AND_EIRI_19,
	STREET_LAIN_AND_EIRI_20,
	STREET_LAIN_AND_EIRI_21,
	STREET_LAIN_AND_EIRI_22,

	BRIDGE_BG,

	BRIDGE_LAIN_1,
	BRIDGE_LAIN_2,
	BRIDGE_LAIN_3,
	BRIDGE_LAIN_4,
	BRIDGE_LAIN_5,

	BRIDGE_BIRD_1,
	BRIDGE_BIRD_2,
	BRIDGE_BIRD_3,
	BRIDGE_BIRD_4,

	EMPTY_BRIDGE,

	BROWN_BEAR_WALK_RIGHT_1,
	BROWN_BEAR_WALK_RIGHT_2,
	BROWN_BEAR_WALK_RIGHT_3,
	BROWN_BEAR_WALK_RIGHT_4,
	BROWN_BEAR_WALK_RIGHT_5,
	BROWN_BEAR_WALK_RIGHT_6,
	BROWN_BEAR_WALK_RIGHT_7,
	BROWN_BEAR_WALK_RIGHT_8,

	WHITE_BEAR_WALK_RIGHT_1,
	WHITE_BEAR_WALK_RIGHT_2,
	WHITE_BEAR_WALK_RIGHT_3,
	WHITE_BEAR_WALK_RIGHT_4,
	WHITE_BEAR_WALK_RIGHT_5,
	WHITE_BEAR_WALK_RIGHT_6,
	WHITE_BEAR_WALK_RIGHT_7,
	WHITE_BEAR_WALK_RIGHT_8,

	KUMA_SHOOT_LAIN_SCHOOL_1,
	KUMA_SHOOT_LAIN_SCHOOL_2,
	KUMA_SHOOT_LAIN_SCHOOL_3,
	KUMA_SHOOT_LAIN_SCHOOL_4,
	KUMA_SHOOT_LAIN_SCHOOL_5,
	KUMA_SHOOT_LAIN_SCHOOL_6,
	KUMA_SHOOT_LAIN_SCHOOL_7,
	KUMA_SHOOT_LAIN_SCHOOL_8,
	KUMA_SHOOT_LAIN_SCHOOL_9,
	KUMA_SHOOT_LAIN_SCHOOL_10,
	KUMA_SHOOT_LAIN_SCHOOL_11,
	KUMA_SHOOT_LAIN_SCHOOL_12,
	KUMA_SHOOT_LAIN_SCHOOL_13,

	KUMA_SHOOT_YASUO_1,
	KUMA_SHOOT_YASUO_2,
	KUMA_SHOOT_YASUO_3,

	KUMA_SHOOT_MIHO_1,
	KUMA_SHOOT_MIHO_2,
	KUMA_SHOOT_MIHO_3,
	KUMA_SHOOT_MIHO_4,
	KUMA_SHOOT_MIHO_5,
	KUMA_SHOOT_MIHO_6,
	KUMA_SHOOT_MIHO_7,

	KUMA_SHOOT_MIKA_1,
	KUMA_SHOOT_MIKA_2,
	KUMA_SHOOT_MIKA_3,

	KUMA_SHOOT_LAIN_SCHOOL_WALK_LEFT_1,
	KUMA_SHOOT_LAIN_SCHOOL_WALK_LEFT_2,
	KUMA_SHOOT_LAIN_SCHOOL_WALK_LEFT_3,
	KUMA_SHOOT_LAIN_SCHOOL_WALK_LEFT_4,
	KUMA_SHOOT_LAIN_SCHOOL_WALK_LEFT_5,
	KUMA_SHOOT_LAIN_SCHOOL_WALK_LEFT_6,
	KUMA_SHOOT_LAIN_SCHOOL_WALK_LEFT_7,
	KUMA_SHOOT_LAIN_SCHOOL_WALK_LEFT_8,

	KUMA_SHOOT_SMOKE_1,
	KUMA_SHOOT_SMOKE_2,
	KUMA_SHOOT_SMOKE_3,
	KUMA_SHOOT_SMOKE_4,

	KUMA_SHOOT_SCREWDRIVER_LAIN_1,
	KUMA_SHOOT_SCREWDRIVER_LAIN_2,
	KUMA_SHOOT_SCREWDRIVER_LAIN_3,
	KUMA_SHOOT_SCREWDRIVER_LAIN_4,
	KUMA_SHOOT_SCREWDRIVER_LAIN_5,
	KUMA_SHOOT_SCREWDRIVER_LAIN_6,
	KUMA_SHOOT_SCREWDRIVER_LAIN_7,
	KUMA_SHOOT_SCREWDRIVER_LAIN_8,
	KUMA_SHOOT_SCREWDRIVER_LAIN_9,

	KUMA_SHOOT_EXPLOSION_1,
	KUMA_SHOOT_EXPLOSION_2,
	KUMA_SHOOT_EXPLOSION_3,
	KUMA_SHOOT_EXPLOSION_4,
	KUMA_SHOOT_EXPLOSION_5,

	KUMA_SHOOT_THING_1,
	KUMA_SHOOT_THING_2,
	KUMA_SHOOT_THING_3,
	KUMA_SHOOT_THING_4,
	KUMA_SHOOT_THING_5,
	KUMA_SHOOT_THING_6,
	KUMA_SHOOT_THING_7,
	KUMA_SHOOT_THING_8,
	KUMA_SHOOT_THING_9,
	KUMA_SHOOT_THING_10,
	KUMA_SHOOT_THING_11,
	KUMA_SHOOT_THING_12,
	KUMA_SHOOT_THING_13,
	KUMA_SHOOT_THING_14,
	KUMA_SHOOT_THING_15,

	KUMA_SHOOT_DEFAULT_LAIN_1,
	KUMA_SHOOT_DEFAULT_LAIN_2,
	KUMA_SHOOT_DEFAULT_LAIN_3,
	KUMA_SHOOT_DEFAULT_LAIN_4,
	KUMA_SHOOT_DEFAULT_LAIN_5,
	KUMA_SHOOT_DEFAULT_LAIN_6,
	KUMA_SHOOT_DEFAULT_LAIN_7,
	KUMA_SHOOT_DEFAULT_LAIN_8,
	KUMA_SHOOT_DEFAULT_LAIN_9,
	KUMA_SHOOT_DEFAULT_LAIN_10,
	KUMA_SHOOT_DEFAULT_LAIN_11,
	KUMA_SHOOT_DEFAULT_LAIN_12,
	KUMA_SHOOT_DEFAULT_LAIN_13,
	KUMA_SHOOT_DEFAULT_LAIN_14,
	KUMA_SHOOT_DEFAULT_LAIN_15,
	KUMA_SHOOT_DEFAULT_LAIN_16,
	KUMA_SHOOT_DEFAULT_LAIN_17,
	KUMA_SHOOT_DEFAULT_LAIN_18,
	KUMA_SHOOT_DEFAULT_LAIN_19,
	KUMA_SHOOT_DEFAULT_LAIN_20,
	KUMA_SHOOT_DEFAULT_LAIN_21,
	KUMA_SHOOT_DEFAULT_LAIN_22,
	KUMA_SHOOT_DEFAULT_LAIN_23,

	KUMA_SHOOT_BROWN_BEAR_WALK_LEFT_1,
	KUMA_SHOOT_BROWN_BEAR_WALK_LEFT_2,
	KUMA_SHOOT_BROWN_BEAR_WALK_LEFT_3,
	KUMA_SHOOT_BROWN_BEAR_WALK_LEFT_4,
	KUMA_SHOOT_BROWN_BEAR_WALK_LEFT_5,
	KUMA_SHOOT_BROWN_BEAR_WALK_LEFT_6,
	KUMA_SHOOT_BROWN_BEAR_WALK_LEFT_7,
	KUMA_SHOOT_BROWN_BEAR_WALK_LEFT_8,

	KUMA_SHOOT_WHITE_BEAR_WALK_LEFT_1,
	KUMA_SHOOT_WHITE_BEAR_WALK_LEFT_2,
	KUMA_SHOOT_WHITE_BEAR_WALK_LEFT_3,
	KUMA_SHOOT_WHITE_BEAR_WALK_LEFT_4,
	KUMA_SHOOT_WHITE_BEAR_WALK_LEFT_5,
	KUMA_SHOOT_WHITE_BEAR_WALK_LEFT_6,
	KUMA_SHOOT_WHITE_BEAR_WALK_LEFT_7,
	KUMA_SHOOT_WHITE_BEAR_WALK_LEFT_8,

	UI_DEFAULT_LAIN_1,
	UI_DEFAULT_LAIN_2,
	UI_DEFAULT_LAIN_3,
	UI_DEFAULT_LAIN_4,
	UI_DEFAULT_LAIN_5,
	UI_DEFAULT_LAIN_6,
	UI_DEFAULT_LAIN_7,
	UI_DEFAULT_LAIN_8,
	UI_DEFAULT_LAIN_9,

	UI_BEAR_LAIN_1,
	UI_BEAR_LAIN_2,
	UI_BEAR_LAIN_3,
	UI_BEAR_LAIN_4,
	UI_BEAR_LAIN_5,
	UI_BEAR_LAIN_6,
	UI_BEAR_LAIN_7,
	UI_BEAR_LAIN_8,
	UI_BEAR_LAIN_9,

	MAIN_UI_1,
	MAIN_UI_2,
	MAIN_UI_3,
	MAIN_UI_4,
	MAIN_UI_5,
	MAIN_UI_6,

	THEATER_BUTTON,

	DRESSUP_BUTTON,

	THEATER_BUTTON_ACTIVE,

	DRESSUP_BUTTON_ACTIVE,

	MAIN_UI_BAR,

	MAIN_UI_BAR_ACTIVE,

	BEAR_ICON_ACTIVE,

	BEAR_ICON,

	SCREWDRIVER_ICON_ACTIVE,

	SCREWDRIVER_ICON,

	MINI_THEATER_OK,

	SCORE_DISPLAY,

	CLASSROOM_PREVIEW,

	SCHOOL_PREVIEW,

	LAIN_ROOM_NIGHT_PREVIEW,

	ARISU_ROOM_PREVIEW,

	CYBERIA_PREVIEW,

	STREET_PREVIEW,

	BRIDGE_PREVIEW,

	MAIN_UI_7,

	DRESSUP_NAVI,

	DRESSUP_SCREWDRIVER,

	LAIN_ROOM_NIGHT_BG,

	ARISU_ROOM_BG,

	DRESSUP_UFO,

	MENU_BG,

	WHITE_FONT_SPRITESHEET,

	RED_FONT_SPRITESHEET,

	PAW_ICON,

	KUMA_SHOOT_BUSH_OVERLAY,

	KUMA_SHOOT_BG,
} TextureID;


#define MAX_TEXTURE_COUNT 1024

typedef struct {
	TextureID id;
	GLuint gl_id;
	int nr_channels;
	Vector2D size;
} Texture;

struct resources;

Texture make_texture(char *image_path, char *name);
Texture *texture_get(struct resources *resources, int texture_id);
void textures_init(struct resources *buffer);
