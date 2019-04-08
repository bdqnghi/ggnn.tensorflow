int main()
{
    int sz[1000];
    int i,m,n,k,a;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&(sz[i]));
    }
    for(i=0;i<n;i++){
        a=k-sz[i];
        for(m=0;m<n;m++){
        if(sz[m]==a&&m!=i)
        {printf("yes");goto L;}} 
    }
        printf("no");
        L:
    return 0;
}


