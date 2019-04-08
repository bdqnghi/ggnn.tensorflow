int a[10][10];
int main()
{
	int n,m,f=0;
	int y,x,c,i;
	int b=0;
	scanf("%d,%d",&n,&m);
	for(y=0;y<n;y++)
	{
		for(x=0;x<m;x++)
		{
			scanf("%d",&a[y][x]);

		}

	}
    for(y=0;y<n;y++)
	{
		for(x=0;x<m;x++)
		{
			if(b<a[y][x])
			{
				c=x;
				b=a[y][x];
			}

		}
		for(i=0;i<n;i++)
		{
			if(a[i][c]<b)
				break;
		}
		if(i==n)
		{
			f=1;
			printf("%d+%d",y,c);
		}
	}
     if(f==0)
	printf("No");
	return 0;
}
