int main(){
    int sz[100000],n,i,a,b,k,s,m;
   scanf("%d",&n);
  for(i=0;i<n*2;){
      scanf("%d%d",&sz[i],&sz[i+1]);
      i+=2;
       }
       int sz2[100000];
       for(i=0;i<2*n;i++){
           sz2[i]=sz[i];
       }
       for(i=0;i<2*n;i++){
           for(k=0;k<2*n-1;k++){
               if(sz[k]>sz[k+1]){
                   m=sz[k],sz[k]=sz[k+1],sz[k+1]=m;
               }
           }
       }
       a=sz[0],b=sz[2*n-1];
       for(k=0;k<n;k++){
           for(i=0;i<2*n;){
               if(sz2[i]<=a&&sz2[i+1]>=a){
                   a=sz2[i+1];
               }
               i=i+2;
           }
       }
       if(a==b){
           printf("%d %d",sz[0],sz[2*n-1]);
       }else{
           printf("no");
       }
       return 0;
}