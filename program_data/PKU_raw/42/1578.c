int main(){
    int x,n,i,j,k,sz[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d",&sz[i]);
    }
    scanf("%d",&x);
    k=0;
    for(i=0;i<n;i++){
           if(sz[i]==x){
                 for(j=i;j<n-1;j++){
                        sz[j]=sz[j+1];
                 }      
                 sz[n-1]=x-1;
           k++;
           i--; 
           }
    } 
    for(i=0;i<n-k;i++){
           if(i==n-k-1) printf("%d",sz[i]);
           else printf("%d ",sz[i]);
    }
    scanf("%d",&n);
    return 0;
}
