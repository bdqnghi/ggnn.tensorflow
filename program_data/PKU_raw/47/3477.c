int main(){
    int n,sz[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i!=n-1){
            scanf("%d ",&sz[i]);
        } else{
            scanf("%d",&sz[i]);
        }
    }
    for(int j=n-1;j>=0;j--){
        if(j!=0){
            printf("%d ",sz[j]);
        } else{
            printf("%d",sz[j]);
        }
    }
    return 0;
}


