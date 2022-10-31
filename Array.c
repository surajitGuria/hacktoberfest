#include <stdio.h>

void main()
{
    int i, arr[4];
    printf("Enter the element of the array\n");
    for (i=0; i<4; i++){
        scanf("%d", &arr[i]);
    }

    printf("The arr is: - \n");

    for (i=0; i<4; i++){
        printf("Your array's element %d is in index %d\n ", arr[i], i);

    }
}