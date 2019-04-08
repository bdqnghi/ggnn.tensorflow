void main()
{
	void findout(int b[10][10],int r,int s);
	int a[10][10],m,n,i,j;

	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	findout(a,m,n);
}


void findout(int b[10][10],int r,int s)
{
	int max,min,i,j,k=0,l=1,c=0,x=0,y=0;
	for(i=0;i<r;i++)
	{
		for(j=0,max=b[i][j];j<s;j++)
		{
			if(max<b[i][j])
			{
				max=b[i][j];
			}
		}
		for(j=0;j<s;j++)
		{
			if(max==b[i][j]) break;
		}
		k=j;
		for(l=0,min=b[l][k];l<r;l++)
		{
			if(min>b[l][k])
			{
				min=b[l][k];
			}
		}
		for(l=0;l<r;l++)
		{
			if(min==b[l][k])
			{
				if(l==i)
				{
					c=1;
					x=l;
					y=k;
					break;
				}
			}
		}
	}
	if(c==1) printf("%d+%d\n",x,y);
	else printf("No");
}
