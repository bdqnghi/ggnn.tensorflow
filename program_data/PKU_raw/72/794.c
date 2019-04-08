int main()
{
    int m,n,i,j;
    int a[22][22];
    int flag;
    int x,y;
    //freopen("5.in","r",stdin);
    //freopen("resullt.out","w",stdout);
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            flag=1;
            
            x=i-1;
            y=j;
            if(flag==1&&x>=0)
            {
                if(a[i][j]<a[x][y])
                {
                    flag=0;
                }
            }
            x=i;
            y=j+1;
            if(flag==1&&y<n)
            {
                if(a[i][j]<a[x][y])
                {
                    flag=0;
                }
            }
            x=i;
            y=j-1;
            if(flag==1&&y>=0)
            {
                if(a[i][j]<a[x][y])
                {
                    flag=0;
                }
            }
            x=i+1;
            y=j;
            if(flag==1&&x<m)
            {
                if(a[i][j]<a[x][y])
                {
                    flag=0;
                }
            }
            if(flag)//flag==1
            {
                printf("%d %d\n",i,j);
            }
        }
    }
	
    return 0;
}
