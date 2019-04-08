int main()
{
    int sz[max],a[max];
    int n,i,k;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d ",&(sz[i]));
    }
    for(k=1;k<n;k++){
        a[k]=sz[n-k+1];
        printf("%d ",a[k]);
    }
    a[n]=sz[1];
    printf("%d",a[n]);
    return 0;
}
