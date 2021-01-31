#include <stdio.h>

int main() {
int n,max1,max2;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
    max1=max2=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]>max1)
        {
        max2=max1;
        max1=a[j];
        }
        else if(a[j]>max2 && a[j]<max1)
        {
            max2=a[j];
        }
    }
    printf("%d",max2);
    return 0;
}
