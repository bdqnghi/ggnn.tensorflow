int main(){
    int n,k,y;
    int sz[1000];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    for(int t=0;t<(n-1);t++){
        for(int x=t+1;x<n;x++){
            y=(sz[t])+(sz[x]);
            if(y==k){
                printf("yes");
                break;
            }
            if(y!=k&&t!=(n-2)){
                continue;
            }
            if(y!=k&&t==(n-2)){
                printf("no");
            }
        }
        if(y==k||y!=k&&t==(n-2)){
            break;
        }
    }
    return 0;
}
