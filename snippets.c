#include <stdio.h>
int main(void)
{
    int arr[] = {10, 20};
    int *p = arr;
    *++p; //incrementing the pointer and dereference it so it will point to arr[1]
    printf("arr[0] = %d, arr[1] = %d, *p = %d", arr[0], arr[1], *p); //it will print 10 20 20
    return 0;
}
