/*WAP to find the range of a set of numbers. Orange is the difference between the
smallest and the biggest number in the list*/

#include <stdio.h>
int difference(int length, int num){
    int small, biggest, range;
    small = biggest = num;
    length = length - 1;
    while (length)
    {
        scanf("%d", &num);
        if (num > biggest)
        {
            biggest = num;
        }

        if (num < small)
        {
            small = num;
        }
        length--;
    }
    range = biggest - small;
    printf("smallest number : %d \nbiggest number : %d\n", small, biggest);
    printf("difference between the smallest and the biggest number: %d", range);
}
int main()
{
    int num, length;
    printf("Enter the length of set of numbers: ");
    scanf("%d", &length);

    printf("Enter the number: ");
    scanf("%d", &num);
    difference(length, num);
    return 0;
}

// OUTPUT:

// Enter the length of set of numbers: 5
// Enter the number: 3
// 2
// 6
// -1
// 0
// smallest number : -1 
// biggest number : 6
// difference between the smallest and the biggest number: 7