int main(){
    int n;
    scanf("%d\n",&n);
    int zx[n];
    int dx[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&zx[i]);
    }
    for(int j=1;j<=n;j++){
        dx[j]=zx[n-j+1];
    }
    for(int j=1;j<n;j++){
        printf("%d ",dx[j]);
    }
    printf("%d",dx[n]);
    return 0;
}
