#pragma once
#include "shader.h"
#include "texture.h"

typedef struct {
	ShaderCache *shaders;
	TextureCache *textures;
} ResourceCache;
int init_resource_cache(ResourceCache **resource_cache);
