int main()
{
int m,n,p=0,sz1[22][22],sz2[400],sz3[400],i,j; 
scanf("%d%d",&m,&n);
for(i=0;i<=m-1;i++)
    {
	for(j=0;j<=n-1;j++)
		{
		scanf("%d",&sz1[i][j]);
		}
	}
for(j=-1;j<=n;j++)
	{
	sz1[-1][j]=-1;
	sz1[m][j]=-1;
	}
for(i=-1;i<=m;i++)
	{
	sz1[i][-1]=-1;
	sz1[i][n]=-1;
	}
for(i=0;i<=m-1;i++)
	{
	for(j=0;j<=n-1;j++)
		{
		if(sz1[i][j]>=sz1[i-1][j]&&sz1[i][j]>=sz1[i][j-1]&&sz1[i][j]>=sz1[i][j+1]&&sz1[i][j]>=sz1[i+1][j])
			{
			sz2[p]=i;
			sz3[p]=j;
			p++;
			}
		}
	}
for(i=0;i<=p-1;i++)
	{
	printf("%d %d\n",sz2[i],sz3[i]);
	}
return 0;
}