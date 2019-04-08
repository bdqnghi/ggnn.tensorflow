int main()
{
    int n,k,a[1000],i,m,s;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(m=0;m<n;m++)
        {
            if((a[i]+a[m])==k&&a[i]!=a[m])
            {
                s=1;
            }
        }
    }
    if(s==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;}



