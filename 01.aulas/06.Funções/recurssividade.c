#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 5!=5 x 4 x 3 x 2 x 1
 * n!= n x (n-1) x (n-2) .... x 1
 * 
 * 0! = 1
*/

int fatorial(int n){
    //Mecanismo de paragem
    printf("->fatorial(%d) \n",n);
    if(n == 0)
        return 1;
    int tmp= fatorial(n-1);
    printf("->fatorial(%d)=%d \n",n,tmp);
    return n*tmp;
}
//! <- 120
//5*fatorial(4) [24]
//4*fatorial(3) [6]
//3*fatorial(2) [2]
//2*fatorial(1) [1]
//1*fatorial(0) [1] 
//!<- 1

int main(int argc, char const *argv[])
{
    printf("%d\n",fatorial(5));
    return EXIT_SUCCESS;
}