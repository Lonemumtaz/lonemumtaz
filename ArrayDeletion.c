// write a code for deletion of array
#include <stdio.h>
    int main(){
        int a[50], size, i, pos;
        printf("Enter the size of the array: ");
        scanf("%d", &size);
        printf("Enter the elements of the array: ");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Enter the position at which the number is to be deleted: ");
        scanf("%d", &pos);
        if (pos <= 0 || pos > size)
        {
            printf("Invalid position");
        }
        else
        {
            for (i = pos - 1; i < size - 1; i++)
            {
                a[i] = a[i + 1];
            }
            size--;
            printf("The array after deletion is: ");
            for (i = 0; i < size; i++)
            {
                printf("%d ", a[i]);
            }
        }
    }