int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int sz[n];
    for(int i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int s=i+1;s<n;s++){
            if(sz[i]+sz[s]==k){
                printf("yes");return 0;
            }
            if(sz[i]+sz[s]!=k&&i==n-2){
                printf("no");return 0;
            }
        }
    }
}

