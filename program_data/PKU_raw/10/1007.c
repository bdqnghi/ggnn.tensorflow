int n;
int a[100]={0};
int max[100]={0};
main()
{
    int i,j,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        if(i==1)
            max[i]=1;
        else
        {
            for(j=1,c=0;j<=i-1;j++)
            {
                if(a[j]<a[i]);
                else
                {
                    if(c<max[j])
                        c=max[j];
                }
            }
            max[i]=c+1;
        }
    }
    for(i=1,c=max[1];i<=n;i++)
    {
        if(c<max[i])
            c=max[i];
    }
    printf("%d",c);
   }