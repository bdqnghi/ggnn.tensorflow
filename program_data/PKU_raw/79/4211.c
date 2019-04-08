int main()
{

    while(1)
    {
        int m;
        int n;
        int i=0;
        int a=0;
        int b=0;
        int sz[1000];
        int numofking=0;
        int c=0;
        scanf("%d%d",&n,&m);
        if(n==0||m==0)
            break;
        c=n;
        for(i=0; i<n; i++)
        {
            sz[i]=1;
        }
        while(n>1)
        {
            while(a<m)
            {
                if(sz[b]==1)
                {
                    a=a+1;
                    if(a==m)
                        sz[b]=0;
                }
                b++;
                b=b%c;
            }
            a=0;
            n=n-1;
        }
        for(i=0; i<c; i++)
        {
            if(sz[i]==1)
            {
                numofking=i+1;
                break;
            }
        }
        printf("%d\n",numofking);
    }
    return 0;
}
