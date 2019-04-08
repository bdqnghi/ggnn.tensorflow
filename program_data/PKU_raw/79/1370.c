
int main()
{
    int n,m;
    int a[N];
    int i,j,r;
    int t;

    while(1)
    {
        scanf("%d %d",&n,&m);
        
        if(n==0)
            break;

        for(i=1;i<=n;i++)
        {
            a[i]=i;
        }

        for(r=0;r<n-1;r++)
        {
            if(r==0)
                i=0;
            else
                i--;

            for(j=1;j<=m;j++)
            {
                if(i==n-r)
                {
                    i=1;
                }
                else
                {
                    i++;
                }
            }

            //printf("%d %d\n",i,a[i]);

            for(j=i;j<n-r;j++)
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }

        }

        printf("%d\n",a[1]);
    }

    return 0;
}