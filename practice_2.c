#include <stdio.h>

int main() {
    FILE *file;
    int age;
    char name[50];

    file = fopen("data.txt", "r");  // Open the file in read mode

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fscanf(file, "%s %d", name, &age);  // Read a string and an integer from the file
    printf("Name: %s, Age: %d\n", name, age);

    fscanf(file, "%s %d", name, &age);  // Read a string and an integer from the file
    printf("Name: %s, Age: %d\n", name, age);

    //fclose(file);  // Close the file
    return 0;
}
