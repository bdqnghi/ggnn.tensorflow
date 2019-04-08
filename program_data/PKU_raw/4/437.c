int a[200][200],f[200][200],n,m,i,j,flag,si,sj;
int main()
{
    scanf("%d %d",&n,&m);
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    while (1)
    {
        flag=0;
        for (i=1;i<=m;i++)
            if (f[1][i]==0)
            {
                flag=1;
                f[1][i]=1;
				break;
            }
		if (flag==0)
        for (i=1;i<=n;i++)
            if (f[i][m]==0)
            {
                flag=2;
                f[i][m]=1;
				break;
            }
        if (flag==1)
        {
            si=1;sj=i;
        }
        if (flag==2)
        {
            si=i;sj=m;
        }
        if (flag==0)
            return 0;
        for (;si<=n && sj>=1;si++,sj--)
            printf("%d\n",a[si][sj]);
    }
    return 0;
}
