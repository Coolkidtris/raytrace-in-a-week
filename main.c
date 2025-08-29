// Includes
#include <stdio.h>
#include "Vectors.h"

// Functions
void createImage(int imageWidth, int imageHeight, char filename[]){
    // Create a new file
    FILE *filePointer;                                      // Pointer to the file we're creating
    filePointer = fopen(filename, "w");                     // Create the new file in writing mode

    // Render the image:
    fprintf(filePointer, "P3\n%d %d\n255\n", imageWidth, imageHeight);  // Top line of the file, representing its dimentions
    printf("Starting...\n");
    for (int j = 0; j < imageHeight; j++){                  // Rendering loop
        for (int i = 0; i < imageWidth; i++){
            
            Vec3 newPixel =                               /* Create a new pixel with RGB colours*/
            {
                .x = (float)(i)/(imageWidth-1), 
                .y = (float)(j)/(imageHeight-1), 
                .z=0.0f
            };                                          
            writeColour(filePointer, newPixel);             // Write said pixel's colour data to our PPM file
        }
    }
    // Close file
    fclose(filePointer); 
}

int main(){
    createImage(256, 256, "Output\\test.ppm");
    return 0;
}