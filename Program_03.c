//  WAP to find the reverse of a 4 digit number

#include<stdio.h>
int reverse(int num)
{
    int rev=0;
    int rem;
    while(num!=0)
    {
        rem=num%10;
        rev=rem+rev*10;
        num=num/10;
    }
    return rev;
}
int main()
{
    int num;
    printf("enter the 4 Digits: ");
    scanf("%d", &num);
    printf("the reverse of a number is %d ",reverse (num));
    return 0;
}

// OUTPUT

/*enter the 4 Digits: 4562 
the reverse of a number is 2654 */