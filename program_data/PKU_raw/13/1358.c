int main(){
    int n;
    scanf("%d",&n);
    int *SZ=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&SZ[i]);
        }
    for(int j=0;j<n;j++){
        if(j==0){
           printf("%d",SZ[j]);
           }   
        for(int k=0;k<j;k++){
            if(SZ[j]==SZ[k]){
               break;
               }else if(k==j-1){
                printf(" %d",SZ[j]);
               }
            }
        }
    return 0;
}