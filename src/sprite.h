#pragma once

#include "animations.h"
#include "sprite.h"
#include "texture.h"

#include <stdbool.h>
#include <stdint.h>

#define SPRITE_VERTEX_COUNT 4
#define SPRITE_INDEX_COUNT 6
#define ROWS_PER_SPRITE_VERTEX 5

#define SPRITE_VBO_SIZE SPRITE_VERTEX_COUNT *ROWS_PER_SPRITE_VERTEX

typedef struct {
	Vector2D pos;
	Vector2D origin_pos; // keeps track of initially passed position.
	Vector2D size;
	unsigned int z_index;
	Texture *texture;
	int texture_index;
	_Bool visible;
	_Bool is_spritesheet;
	_Bool mirrored;
	// if true, sprite's position determines the location of its center.
	// else, it points to the top left corner of the sprite.
	_Bool pivot_centered;
	// in case of a spritesheet, texture_size denotes size of a single
	// sprite from the atlas.
	Vector2D texture_size;
	unsigned int frame_index;   // always 0 if non-spritesheet texture
	unsigned int max_frame;	    // always 0 if non-spritesheet texture
	AnimationFrame *animation_frame;
	AnimationID animation_id;
	double last_updated;
} Sprite;

void depth_sort(Sprite **sprites, unsigned int sprite_count);
void initialize_sprite(Sprite *sprite);
_Bool is_sprite_within_bounds(const Sprite *sprite, const Vector2D point);
Vector2D get_sprite_center_coords(const Sprite *sprite);
GLfloat *get_sprite_vertices(GLfloat *buffer, Sprite *sprite);
GLfloat *get_pivoted_centered_sprite_vertices(GLfloat *buffer, Sprite *sprite);
Sprite make_click_barrier(GLfloat left, GLfloat top, GLfloat right,
			  GLfloat bottom);
_Bool sprite_is_max_frame(Sprite *sprite);
void sprite_try_next_frame(double now, Sprite *sprite);
void sprite_set_animation(Animation *animations, Sprite *sprite,
			  int animation_id);
