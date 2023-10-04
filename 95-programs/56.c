// Delete 3rd element in an array[8]

#include <stdio.h>
void main()
{
    int i, pos;
    int a[8];
    printf("Enter the elementsin an array: \n");
    for (i = 0; i < 9; i++)
        scanf("%d", &a[i]);
    printf("\nDeletion\n");
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    for (i = pos; i < 9; i++)
        a[i] = a[i + 1];
    printf("After deletion of an array \n");
    for (i = 0; i < 8; i++)
        printf("%d ", a[i]);
}

/*
Enter the elementsin an array:
10 20 30 40 50 60 70 80

Deletion
Enter the position to delete: 2
After deletion of an array
10 20 40 50 60 70 80
 */