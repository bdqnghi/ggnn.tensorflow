int main()
{
	int x,y,a[40]={0},b[40]={0},x1,y1,i,j;
	scanf("%d%d", &x, &y);
	if(x==y)
	{
		printf("%d\n", x);
		return 0;
	}
	if(x==1 || y==1)
	{
		printf("1\n");
		return 0;
	}
	x1=sqrt(x);
	y1=sqrt(y);
	a[0]=x;
	b[0]=y;
	for(i=1;i<=x1;i++)
	{
		a[i]=a[i-1]/2;
	}
	for(i=1;i<=y1;i++)
	{
		b[i]=b[i-1]/2;
	}
	for(i=0;i<=x1;i++)
	{
		for(j=0;j<=y1;j++)
		{
			if(b[j]==a[i])
			{
				printf("%d\n", a[i]);
				return 0;
			}
		}
	}
}






    