int main(){
    int n,sz[100000],k,i,j,num;
    num=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&sz[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++){
                     if(sz[i]==k){
                                  for(j=i;j<n-1;j++){
                                                   sz[j]=sz[j+1];
                                                   }
                                  num++;
                                  i--;
                                  n--;
                     
                                  }
                     }
    for(i=0;i<n-1;i++) printf("%d ",sz[i]);
    printf("%d",sz[n-1]);


    return 0;
}
    