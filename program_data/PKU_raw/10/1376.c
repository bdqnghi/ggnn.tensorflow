int main ()
{
    int k,n,i,j;
    int max;
    int d[30];
    int h[30];
    d[0]=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&h[i]);
    h[0]=2147483647;
    for(i=1;i<=n;i++)
    {
        max=0;
        for(j=0;j<i;j++)
        {
            if(h[i]<=h[j]&&(d[j]+1)>max)
            max=d[j]+1;
        }
        d[i]=max;
    }
    max=0;
    for(i=1;i<=n;i++)
        if(d[i]>max)
            max=d[i];
    printf("%d\n",max);
    getchar();
    getchar();
    return 0;
}
