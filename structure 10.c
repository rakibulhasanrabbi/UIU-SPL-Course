#include <stdio.h>

struct triangle {
    int triangle_id;
    float base;
    float height;
};

int main() {
    struct triangle triangles[3];
    float areas[3];

    // Input for three triangles
    for (int i = 0; i < 3; i++) {
        printf("Enter the details for triangle %d\n", i+1);
        printf("Triangle ID: ");
        scanf("%d", &triangles[i].triangle_id);
        printf("Base: ");
        scanf("%f", &triangles[i].base);
        printf("Height: ");
        scanf("%f", &triangles[i].height);

        // Calculate the area
        areas[i] = (triangles[i].base * triangles[i].height) / 2;
    }

    // Output the areas
    for (int i = 0; i < 3; i++) {
        printf("The area of triangle with ID %d is: %0.2f\n", triangles[i].triangle_id, areas[i]);
    }

    return 0;
}
