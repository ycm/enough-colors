#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Comment
/* Comment */
#define MAX_LENGTH 100
int main() {
    int number = 42;
    char flag = 1;
    char text[MAX_LENGTH] = "Hello, World!";
    int *ptr = &number;
    char buffer[MAX_LENGTH];
    strncpy(buffer, text, MAX_LENGTH - 1);
    buffer[MAX_LENGTH - 1] = '\0';
    if (flag) {
        printf("Flag is true.\n");
    } else {
        printf("Flag is false.\n");
    }
    printMessage(buffer);
    int *dynamicArray = (int *)malloc(5 * sizeof(int));
    if (dynamicArray == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i * i;
        printf("dynamicArray[%d] = %d\n", i, dynamicArray[i]);
    }
    free(dynamicArray);
    return 0;
}
