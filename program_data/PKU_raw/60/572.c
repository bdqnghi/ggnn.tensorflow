int main(){
    int n,a=0,i,j,k=0;
    int sz[num];
    scanf("%d",&n);
    for(i=2;i<=n;i++){
     for(j=2;j<=i;j++){
       if(i%j==0&&i!=j){
         break;
         }else if(i==j){
           sz[k]=i;
           k++;
           }
           }
           }
            
           for(i=0;i<k-1;i++){
            if(sz[i+1]==sz[i]+2){                
           printf("%d %d\n",sz[i],sz[i+1]);
           a++;
           
           }
           }
           if(a==0){
             printf("empty");
             }
              
  return 0;
}
