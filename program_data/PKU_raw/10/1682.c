int rec[26];
int k,sum,i,j;
int n[26];
int max(int a,int b)
{
    if (a>b) return(a);
    else return(b);
}
main()
{
    scanf("%d",&k);
    for(i=1;i<=k;i++) scanf("%d",&rec[i]);
    for(i=1;i<=k;i++) n[i]=1;
    for (i=2;i<=k;i++)
        for(j=1;j<i;j++) if (rec[i]<=rec[j]) n[i]=max(n[i],n[j]+1);
    sum=0;
    for(i=1;i<=k;i++) sum=max(sum,n[i]);
    printf("%d",sum);
}
