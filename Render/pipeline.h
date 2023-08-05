#pragma once
#include "math.h"
#include "spainlock.h"
#include "shader.h"
#include "win32.h"

const int WINDOW_HEIGHT = 600;
const int WINDOW_WIDTH = 800;

//rasterize triangle
void rasterize_singlethread(vec4* clipcoord_attri, unsigned char* framebuffer, float* zbuffer, IShader& shader);
void rasterize_multithread(vec4* clipcoord_attri, unsigned char* framebuffer, float* zbuffer, IShader& shader);
void draw_triangles(unsigned char* framebuffer, float* zbuffer, IShader& shader, int nface);