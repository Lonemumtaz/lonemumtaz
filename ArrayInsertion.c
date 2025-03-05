#include<stdio.h>
int main()
{
    int a[50], size, i ,num, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);
    printf("Enter the position at which the number is to be inserted: ");
    scanf("%d", &pos);
    if(pos<=0||pos>size+1)
    {
        printf("Invalid position");
    }
    else
    {
        for(i=size-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;
        printf("The array after insertion is: ");
        for(i=0;i<size;i++)
        {
            printf("%d ", a[i]);
        }
    }

}