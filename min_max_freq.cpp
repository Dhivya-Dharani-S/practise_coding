#include<iostream>
#include<cstdlib>
#include<climits>
using namespace std;

void max_frequency(char *str,int n,int *min_freq,int *max_freq,char *min_char,char *max_char){
    int count[26]={0};
    for(int i=0;i<=n;i++){
        count[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            if(count[i]>*max_freq){
                *max_freq = count[i];
                *max_char = i+'a';
            }
            if(count[i]<*min_freq){
                *min_freq = count[i];
                *min_char = i+'a';
            }
        }
    }
}




int main(){
    char *str=(char *) malloc (sizeof(char));
    int n=0;
    int min_freq=INT_MAX,max_freq=INT_MIN;
    char min_char,max_char;
    if(str==NULL){
        cout<<"Memory not allocated";
        return 0;
    }
    cout<<"Enter the string :- "<<endl;
while(scanf("%c",&str[n]) && str[n]!='\n' ){
    n++;
    str=(char *)realloc(str,n+1);
}
cout<<"The string is : "<<endl;
for(int i=0;i<=n;i++){
    cout<<str[i]<<" ";
}

max_frequency(str,n,&min_freq,&max_freq,&min_char,&max_char);
cout<<min_char<<" " <<min_freq<<endl;
cout<<max_char<<" "<<max_freq<<endl;
if(str){
    free(str);
    str=NULL;
}
    return 0;
}
