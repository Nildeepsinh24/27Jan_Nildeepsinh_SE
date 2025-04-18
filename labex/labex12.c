#include <stdio.h>

int main() {
    FILE *file;
    char str[] = "This is a test string written to the file.";

    // Step 1: Create and open the file for writing
    file = fopen("testfile.txt", "w");  // "w" mode creates the file if it doesn't exist
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;  // Exit if the file can't be opened
    }

    // Step 2: Write a string into the file
    fprintf(file, "%s", str);

    // Step 3: Close the file after writing
    fclose(file);

    // Step 4: Open the file again for reading
    file = fopen("testfile.txt", "r");  // "r" mode opens the file for reading
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;  // Exit if the file can't be opened
    }

    // Step 5: Read and display the content of the file
    char buffer[100];  // Buffer to store the read content
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);  // Print the content to the screen
    }

    // Step 6: Close the file after reading
    fclose(file);

    return 0;
}
