int know[10000],bknown[10000];
int main()
{
    int n,i,a,b;

    scanf("%d",&n);
    for(i=0;i<n;i++) know[i]=bknown[i]=0;
    while(scanf("%d%d",&a,&b))
    {
        if(a==b&&b==0) break;
        know[a]++;
        bknown[b]++;
    }
    for(i=0;i<n;i++)
        if(know[i]==0&&bknown[i]==n-1) break;
    if(i<=n) printf("%d\n",i);
    else printf("NOT FOUND\n");
    return 0;
}
