// WAP to print all the prime numbers from 1 to 300.

#include <stdio.h>
int prime(int num){
    int i, prime;
    for (num = 1; num <= 300; num++)
    {
        prime = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                prime = 1;
                break;
            }
        }
        if (prime == 0 & num != 1)
            printf("%d\t", num);
    }
}
int main()
{
    int num;
    prime(num);
    return 0;
}



// OUTPUT

/* 2       3       5       7       11      13      17      19      23      29       
31      37      41      43      47      53      59      61      67      7173      
79      83      89      97      101     103     107     109     113     127     
131     137     139     149     151     157     163     167     173       179     
181     191     193     197     199     211     223     227     229     233     
239     241     251     257     263     269     271     277       281     283     
293 */