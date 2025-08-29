#include "Rays.h"

Ray newR(Vec3 origin, Vec3 direction){
    Ray newRay = {origin, direction};
    return newRay;
}

Vec3 origin(Ray ray){
    return ray.origin;
}               // Returns the origin of a ray 

Vec3 direction(Ray ray){
    return ray.direction;
}               // Returns the directional vector of a ray

Vec3 at(float t, Ray ray){                              // This is equivalent to (point) P = ray origin + t * ray direction
    Vec3 scaledDir = ray.direction;                     // make a copy
    mul(&scaledDir, t);                                 //t*dir
    Vec3 P = vadd(ray.origin, ray.direction);           // origin + dir
    return P;
}               // Returns the distance between the rays origin and a place along its path