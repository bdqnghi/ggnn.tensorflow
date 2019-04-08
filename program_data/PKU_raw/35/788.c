int main()
{
	int m,n;
	int z[8][8],a[8],b[8],c[8],d[8];
	int k=0,l=0,t=0;
	scanf("%d,%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&z[i][j]);
		}
	}
	for(int x=0;x<m;x++)
	{
		int max=0;
		for(int y=0;y<m;y++)
		{
			if(z[x][y]>max)
			{
				max=z[x][y];
				a[k]=x;
				b[k]=y;
			}
		}
		k++;
	}
	for(int e=0;e<n;e++)
	{
		int min=100000;
		for(int f=0;f<m;f++)
		{
			if(z[f][e]<min)
			{
				min=z[f][e];
				c[l]=f;
				d[l]=e;
			}
		}
		l++;
	}
    for(k=0;k<m;k++)
	{
		for(l=0;l<n;l++)
		{
			if(a[k]==c[l]&&b[k]==d[l])
			{
				printf("%d+%d",a[k],b[k]);
				t++;
			}
		}
	}
	if(t==0)
		printf("No");
	return 0;
}


