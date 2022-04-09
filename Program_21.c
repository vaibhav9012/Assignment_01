// WAP to print the multiplication table of the number entered by the user.

#include<stdio.h>
int main(){
    int i, j;
    printf("enter the digits for table: ");
    scanf("%d", &i);
    for(j=1; j<=10; j++){
        printf("%d * %d = %d\n", i,j, i*j);
    }
    return 0;
}

// OUTPUT

// enter the digits for table: 2
// 2 * 1 = 2
// 2 * 2 = 4
// 2 * 3 = 6
// 2 * 4 = 8
// 2 * 5 = 10
// 2 * 6 = 12
// 2 * 7 = 14
// 2 * 8 = 16
// 2 * 9 = 18
// 2 * 10 = 20