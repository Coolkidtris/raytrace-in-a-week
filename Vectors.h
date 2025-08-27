#ifndef VECTOR_3
#define VECTOR_3

/*/
 This defines all headers and structs related to Vectors. Vector functions
 Are contained within Vectors.C. 

 Structs defined here can also be used for colours (such as 4D Structs), but the
 Function declarations pertain specifically to 3D for the moment. 4D implementation
 will come eventually.
*/

// Struct
typedef struct{
    float x;
    float y;
    float z;
}Vec3;

typedef struct{
    float x;
    float y;
    float z;
    float w;
}Vec4;

typedef Vec3 Colour;

// Math Functions - Scalar
Vec3* neg(Vec3 *vectorToNegate);             // Negates all members of a vector
Vec3* mul(Vec3 *vectorToMul, float amnt);    // Multiplies all members of a Vector by a certain number
Vec3* div(Vec3 *vectorToDiv, float amnt);
Vec3* add(Vec3 *vectorToAdd, float amnt);    // Adds a value to all members of a Vector

// Math Functions - Vectorised
Vec3 vadd(Vec3 v1, Vec3 v2);                // Adds 2 vectors together
Vec3 vsub(Vec3 v1, Vec3 v2);                // Subtract 2 vectors from each other
Vec3 vmul(Vec3 v1, Vec3 v2);                // Multiply 2 vectors together
Vec3 vdiv(Vec3 v1, Vec3 v2);                // Divide 2 vectors by each other

// Utility Functions
Vec3 *sqr(Vec3 *vectorToSqr);               // Squares all members of a vector
Vec3 cross(Vec3 v1, Vec3 v2);               // Returns a Vector with its cross product

void vout(Vec3 vector);                     // Prints all members of a Vector
float dot(Vec3 v1, Vec3 v2);                // Returns a Vector with its dot product
float vlen(Vec3 vector);                    // Returns the length of a Vector
#endif