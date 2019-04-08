void main()
{
	int r(int x);
	int a [6],i,x,y;
	for (i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<6;i++)
	{
		y=r(a[i]);
		printf("%d",y);
		if(i!=5)
		printf("\n");
	}
}
int r (int x)
{
	int y,m,i,b[50];
	if (x==0)y=0;
	else if (x<0)
	{
		x=-x;
		m=(int) log10(x);
		for (i=m;i>=0;i--)
		{
			b[i]=(int)(x/pow(10,i));
			x=x%(int)(pow(10,i));
		}
		for(i=m-1,y=b[m];i>=0;i--)
		{
			y=y+b[i]*pow(10,m-i);
		}
		y=-y;
	}
	else if (x>0)
	{
		m=(int) log10(x);
		for (i=m;i>=0;i--)
		{
			b[i]=(int)(x/pow(10,i));
			x=x%(int)(pow(10,i));
		}
		for(i=m-1,y=b[m];i>=0;i--)
		{
			y=y+b[i]*pow(10,m-i);
		}
    }
	return (y);
}



