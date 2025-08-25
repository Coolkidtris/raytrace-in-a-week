// Includes
#include <stdio.h>


// Functions
void createImage(int imageWidth, int imageHeight, char filename[]){
    // Local variables
    int integerR, integerG, integerB;
    float floatR, floatG, floatB;

    // Create a new file
    FILE *filePointer;                                      // Pointer to the file we're creating
    filePointer = fopen(filename, "w");                     // Create the new file in writing mode

    // Render the image:
    fprintf(filePointer, "P3\n%d %d\n255\n", imageWidth, imageHeight);  // Top line of the file, representing its dimentions

    for (int j = 0; j < imageHeight; j++){                  // Rendering loop
        for (int i = 0; i < imageWidth; i++){

            /*
            The below calculates values ranging from 0.0 to 1.0, with 0.0 being
            the minimum possible value for that colour (black) and 1.0 being the
            brightest possible value for said colour. 
            */

            floatR = (float)(i) / (imageWidth-1);           // Calculate real Red value 
            floatG = (float)(j) / (imageWidth-1);           // Calculate real Green value
            floatB = 0.0;                                   // Blue is a constant 0
            
            /*
            The below converts the real value of colours ranging from 0.0 to 1.0
            into RGB values ranging from 0 to 255. This allows them to be displayed
            on screen.
            */

            integerR = (int) (255.999 * floatR);            // Calcuate RGB Red value 
            integerG = (int) (255.999 * floatG);            // Calculate RGB Green value
            integerB = (int) (255.999 * floatB);            // Blue is still a constant.
            
            fprintf(filePointer, "%d %d %d\n", integerR, integerG, integerB);
        }
    }
    // Close file
    fclose(filePointer);
    printf("File created successfully");   
}

int main(){
    createImage(256, 256, "test.ppm");
    return 0;
}