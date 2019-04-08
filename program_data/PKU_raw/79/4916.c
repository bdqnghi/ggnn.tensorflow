int main()
{
    int m,n,i,k,j,l,sum;
    for(l=1;;l++)
    {
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)
        break;
        else
        {
            int a[300];
            for(i=0;i<300;i++)
            {
                if(i<=n) a[i]=1;
                else a[i]=0;
            }
            for(i=0,k=0;;i++)
            {
                if(i==n) i=0;
                if(a[i]==1) k++;
                if(k==m)
                {
                    a[i]=0;
                    k=0;
                }
                for(j=0,sum=0;j<n;j++)
                    sum+=a[j];
                if(sum==1) break;
                //else sum=0;
            }
            for(i=0;i<n;i++)
                if(a[i]==1) printf("%d\n",i+1);
        }
    }
    getchar();
    getchar();
}
