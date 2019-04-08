int main(){
    int n,i,j;
    scanf("%d",&n);
    int sz[n];
    int ssz[n],count=0;
    for(i=0;i<n;i++){
        scanf("%d ",&sz[i]);
        }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(sz[j]==sz[i]){
                sz[j]=0;
                }
            }
        }
    for(i=0;i<n;i++){
        if(sz[i]!=0){
            ssz[count]=sz[i];
            count++;
        }
    }
    printf("%d",ssz[0]);
    for(i=1;i<count;i++){
        printf(",%d",ssz[i]);
        }
    return 0;
}