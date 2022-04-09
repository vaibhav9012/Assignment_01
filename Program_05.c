/*If a five-digit number is input through the keyboard, write a program to print a new
number by adding one to each of its digits. 
For example if the number that is input is 12391 then the output should be displayed
as 23402.*/

#include<stdio.h>
int digits(int n){
    int rem; 
    int ans=0;
    int Inc=1;
    while(n>0){
        rem=n%10;
        rem++;
        rem=rem%10;
        ans=ans+rem*Inc;
        Inc=Inc*10;
        n=n/10;
    }
    printf("Elements: %d",ans);
}
int main(){
    int n=35897;
    digits(n);
    return 0;
}

// OUTPUT

// Elements: 46908