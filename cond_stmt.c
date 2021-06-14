#include<stdio.h>
int main()
{
    int i=-3, j=2, k=0, m;
    m = ++i || ++j && ++k; /* here i increments and since it is the non-negative integer this expression 
evaluates to true & so that the remaining expression will not execute as in OR statement if one statement 
is correct  the whole statement becomes true */
    printf("%d, %d, %d, %d\n", i, j, k, m);// so therefore i=-3+1 --> -2 , j and k value as it is printed and m statement evaulated to true so 1 is the answer
    return 0;
}
