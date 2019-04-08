int main()
{
	int n,i,x,sum;
	int panduan(int);
	int jisuan(int);
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		x=panduan(i);
		if(x==1)
		{
			sum=sum+jisuan(i);
		}
	}
	printf("%d\n",sum);
    return 0;
}
int panduan(int y)
{
	int z;
	if(y%7==0)
	{
		return 0;
	}
	else 
	{
		for(; ;)
		{
			z=y-10*(int)(y/10);
			if(z==7)
			{
				return 0;
			}
			y=(int)(y/10);
			if(y==0)
			{
				return 1;
			}
		}
	}
}
int jisuan(int y)
{
	int z;
	z=y*y;
	return(z);
}