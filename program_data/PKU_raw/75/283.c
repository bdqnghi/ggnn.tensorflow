int main()
{
    int a[1001],b[1001],x[1001],i,j,k,l,m=0,n;
    char c;
    c=','; 
    scanf("%d",&a[1]);
    i=2;
    while (scanf(",%d",&a[i])) i++;
    scanf("%d",&b[1]);
    i=2;
    while (scanf(",%d",&b[i])) i++;
    n=i-1;
    for (i=1;i<=n;i++)
        for (j=a[i];j<b[i];j++)
             x[j]++;
    l=0;
    for (i=0;i<=1000;i++)
        if (x[i]>l) l=x[i];
    printf("%d %d",n,l);
    scanf("%d",&i);
}
