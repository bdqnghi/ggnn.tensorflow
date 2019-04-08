int main()
{
    int m[300],n[300],a[300];
    int i=0,j=0,k=0,r=0,t=0,q=0;
    for (k=0;k<300;k++)
    {
	    scanf("%d %d",&n[k],&m[k]);
	    if (n[k]==0){k=300;}
	    else r=r+1;
    }
    for (k=0;k<r;k++)
    {
        t=0;q=0;
        for (i=1;i<=n[k]+1;i++)
        {
            a[i]=i;
        }
        
        for (i=1;i<=n[k]+1;i++)
	    {
            if (i==n[k]+1){i=1;}
            if (a[i]!=0){t=t+1;}
            if (t==m[k]){a[i]=0;t=0;q=q+1;}
            if (q==n[k]-1){i=n[k]+2;q=0;}
        }
        for (j=1;j<=n[k];j++)
        {
            if (a[j]!=0)
            {
               printf("%d\n",a[j]);
            }
        }
    }
    return 0;
}