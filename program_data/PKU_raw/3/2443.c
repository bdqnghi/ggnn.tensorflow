
int main(){
    int n,k;
    int a[1000];

    scanf("%d %d",&n,&k);
    for(int t=0;t<n;t++){
        scanf("%d ",&a[t]);}
    for(int i=0;i<n-1;i++){
        for(int m=i+1;m<n;m++){
            if(a[i]+a[m]==k){
                printf("yes");
                return 0;}
                if(i==n-2&&m==n-1&&a[i]+a[m]!=k){
                    printf("no");
                    return 0;}}}
                    }