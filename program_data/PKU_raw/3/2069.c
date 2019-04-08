int main(){
    int n,k,i,j,x[1000];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
           scanf("%d",&x[i]);
    }
    
    for(j=0;j<n;j++){
            for(i=j+1;i<=n;i++){
                   if(x[j]+x[i]==k){
                          printf("yes");
                          return 0;
                   }
            }
    }
    printf("no");
    
    scanf("%d %d",&n,&k);                
    return 0;
}