main()
{
    int a[300];
    int b[20];
    int c[20];
    int i,j,k,l,n,m,x;
    int s,t;
    int p,q;
    int count=0;
    s=0;
    t=0;
    for(i=0;;i++)
    {
        scanf("%d %d",&n,&m);
        b[s]=n;
        c[s]=m;
        if((n==0)&&(m==0))
        {
            break;
        }
        s++;
    }
    for(j=0;j<=s-1;j++)
    {
        p=b[j];
        q=c[j];
        if(p==1)
        {
            x=1;
            printf("%d\n",x);
        }
        if(p>1)
        {
        for(k=0;k<=p-1;k++)
        {
            a[k]=k+1;
        }
        for(l=0;;l++)
        {
            t=(q+t-1)%(p-count);
            for(i=t;i<=p-count-2;i++)
            {
                a[i]=a[i+1];
            }
            count++;
            if(count==p-1)
            {
                break;
            }
        }
        printf("%d\n",a[0]);
        t=0;
        count=0;
    }
    }
}
