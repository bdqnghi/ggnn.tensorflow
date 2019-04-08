int main(){
   int a,b,i,j,k;
   int s[100][100];
   scanf("%d %d",&a,&b);
   for(i=0;i<a;i++){
       for(j=0;j<b;j++){
           scanf("%d",&s[i][j]);
       }
   }
   for(k=0;k<a*1.0/2&&k<b*1.0/2;k++){
       if(b<=a&&k*2==b-1){
            for(i=k;i<=a-k-1;i++){
                 printf("%d\n",s[i][k]);
            }
       }else if(a<b&&k*2==a-1){
            for(j=k;j<=b-k-1;j++){
                 printf("%d\n",s[k][j]);
            }
       }else{
            for(j=k;j<=b-k-1;j++){
                 printf("%d\n",s[k][j]);
            }
            for(i=k+1;i<=a-k-1;i++){
                 printf("%d\n",s[i][b-k-1]);
            }
            for(j=b-k-2;j>=k;j--){
                 printf("%d\n",s[a-k-1][j]);
            }
            for(i=a-k-2;i>=k+1;i--){
                 printf("%d\n",s[i][k]);
            }
       }
   }
   return 0;
}