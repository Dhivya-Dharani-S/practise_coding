#include <stdio.h>

int main() {
int n,key,pos;
scanf("%d",&n);
int a[100];
for(int i=0;i<n;i++)
{
scanf("\n%d ",&a[i]);
}
scanf("%d",&key);
scanf("%d",&pos);
if(pos<=n && pos>=0)
{
for(int i = n-1; i >=pos-1; i--){
    a[i+1] = a[i];
}
a[pos-1] = key;
for(int i = 0; i <= n; i++){
            printf("%d ", a[i]);
    }
}
else
printf("Invalid Position\n");
    return 0;
}
