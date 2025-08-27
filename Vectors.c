#include <stdio.h>
#include "Vectors.h"

Vec3 *neg(Vec3 *vectorToNegate){
    vectorToNegate->x = -vectorToNegate->x;
    vectorToNegate->y = -vectorToNegate->y;
    vectorToNegate->z = -vectorToNegate->z;
    return vectorToNegate;
}             // Negates all members of a vector

Vec3 *mul(Vec3 *vectorToMul, float amnt){
    vectorToMul->x += amnt;
    vectorToMul->y += amnt;
    vectorToMul->z += amnt;

    return vectorToMul;
}    // Multiplies all members of a Vector by a certain number

Vec3 *div(Vec3 *vectorToDiv, float amnt){
    vectorToDiv->x /= amnt;
    vectorToDiv->y /= amnt;
    vectorToDiv->z /= amnt;

    return vectorToDiv;
}

Vec3 *add(Vec3 *vectorToAdd, float amnt){
    vectorToAdd->x += amnt;
    vectorToAdd->y += amnt;
    vectorToAdd->z += amnt;

    return vectorToAdd;
}    // Adds a value to all members of a Vector

// Math Functions - Vectorised
Vec3 vadd(Vec3 v1, Vec3 v2){
    Vec3 newVec;

    newVec.x = v1.x + v2.x;
    newVec.y = v1.y + v2.y;
    newVec.z = v1.z + v2.z;

    return newVec;
}              // Adds 2 vectors together and returns a third

Vec3 vsub(Vec3 v1, Vec3 v2){
    Vec3 newVec;

    newVec.x = v1.x - v2.x;
    newVec.y = v1.y - v2.y;
    newVec.z = v1.z - v2.z;

    return newVec;
}              // Subtract 2 vectors from each other

Vec3 vmul(Vec3 v1, Vec3 v2){
    Vec3 newVec;

    newVec.x = v1.x * v2.x;
    newVec.y = v1.y * v2.y;
    newVec.z = v1.z * v2.z;

    return newVec;
}              // Multiply 2 vectors together

Vec3 vdiv(Vec3 v1, Vec3 v2){
    Vec3 newVec;

    newVec.x = v1.x / v2.x;
    newVec.y = v1.y / v2.y;
    newVec.z = v1.z / v2.z;

    return newVec;
}              // Divide 2 vectors by each other

// Utility Functions
void vout(Vec3 vector){
    return printf("%f, %f, %f", vector.x, vector.y, vector.z);
}                     // Prints all members of a Vector

Vec3 *sqr(Vec3 *vectorToSqr){
    vectorToSqr->x *= vectorToSqr->x;
    vectorToSqr->y *= vectorToSqr->y;
    vectorToSqr->z *= vectorToSqr->z;

    return vectorToSqr;
}                // Squares all members of a vector

float vlen(Vec3 vector){}                    // Returns the length of a Vector
float dot(Vec3 v1, Vec3 v2){
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z; 
}                     // Returns a Vector with its dot product

Vec3 cross(Vec3 *vector){}                   // Returns a Vector with its cross product