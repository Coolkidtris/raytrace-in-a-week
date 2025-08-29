#ifndef RAYS_H
#define RAYS_H
#include "Vectors.h"

/*
 This defines all headers and structs related to rays and raycasting.  
*/


typedef struct{
    Vec3 origin;
    Vec3 direction;
}Ray;

Ray newR(Vec3 origin, Vec3 direction);      // Create a new Ray

Vec3 origin(Ray ray);                       // Returns the origin of a ray  
Vec3 direction(Ray ray);                    // Returns the directional vector of a ray
Vec3 at(float t, Ray ray);                  // Returns the distance between the rays origin and a place along its path

#endif