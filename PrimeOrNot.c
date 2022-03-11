/* Author: Zhuoming Huang
*  Date: 03/10/2022
*  File: PrimeOrNot.c
*/
/* Prime or Not
*   1. return 1 if a number is prime
*   2. return the smallest multiplier if a number is not prime
*/

#include <stdio.h>

int isPrime(long n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    for (int i=2; i<=n/2; i++){
        if (n % i == 0) {
            return i;
        }
    }
    return 1;
}

int main()
{
    long n;
    
    while(1) {
        
        scanf("%ld", &n);
    
        int result = isPrime(n);
    
        printf("%d\n", result);
        
    }
    return 0;
}