void staircase(int n) {
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
       if(j<=n-i){cout<<" ";} /*this statement is the logic here */
       else{cout<<"#";}
    }cout<<endl;
}
}
/*Sample Input

if n=6 
Output will be:-

     #
    ##
   ###
  ####
 #####
######

Explanation
The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of n=6. */

