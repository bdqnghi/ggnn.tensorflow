main()
{
    int a[101],i,n,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        c++;
        }
    int b[101];
    b[1]=1;
    b[2]=1;
    for(i=3;i<=100;i++)
    {
        b[i]=b[i-1]+b[i-2];

        }
    for(i=1;i<=c;i++)
    {
        printf("%d\n",b[a[i]]);
        }
    }
