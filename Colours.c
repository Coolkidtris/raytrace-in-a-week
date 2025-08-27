#include "Vectors.h"
#include <stdio.h>

void writeColour(FILE* filePtr, Colour pixel){
    /*
    float floatR = pixel.x;
    float floatG = pixel.y;
    float floatB = pixel.z;
    */

    /*
    The following uses the Pixel as a Vector to store colour data.
    Instead of multiplying by floatR, floatG and floatB which are
    calculated during the loop, we can abstract this further by
    calculating them and storing them in a Vector, typedefined as
    'Colour'.
    */

    int integerR = (int) (255.999 * pixel.x);            // Calcuate RGB Red value 
    int integerG = (int) (255.999 * pixel.y);            // Calculate RGB Green value
    int integerB = (int) (255.999 * pixel.z);            // Blue is still a constant.

    fprintf(filePtr, "%d %d %d\n", integerR, integerG, integerB);
}