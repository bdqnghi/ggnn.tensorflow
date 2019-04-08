int main()
{
	int n,m,a[8][8],i,j,p,q,b,k,t,w,u=0;
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&(a[i][j]));
		}
	}
	struct zui
	{
		int x,y;
		int z;
	}
	c[8];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(j==0)
			{
				b=a[i][0];
				p=i;
				q=0;
				continue;
			}
			if(a[i][j]>b)
			{
				b=a[i][j];
				p=i;
				q=j;
			}
		}
		c[i].x=q;
		c[i].y=p;
		c[i].z=a[p][q];
	}
	for(k=0;k<n;k++)
	{
		w=c[k].x;
		for(t=0;t<n;t++)
		{
			if(c[k].z>a[t][w])
				break;
			else if(t==n-1)
			{
				printf("%d+%d",c[k].y,c[k].x);
				u++;
			}
		}
	}
	if(u==0)
		printf("No");
	return 0;
}

