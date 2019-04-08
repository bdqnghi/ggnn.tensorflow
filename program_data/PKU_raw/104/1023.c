//????????-1?/2?????/2
//???i??2^(i-1)????2^i????

//?2^n???
int times2(int i)
{
	int j;
	int s=1;
	if(i==0)
		return 1;
	else
	{
		for(j=1;j<=i;j++)
			s*=2;
		return s;
	}
}

//?k?????????
int level(int k)
{
	int i;
	for(i=1;;i++)
	{
		if((times2(i-1)<=k)&&(times2(i)>k))
		{
			return i;
		}
	}
}

//??????????
int up(int x)
{
	int y;
	if(x%2==0)
		y=x/2;
	else
		y=(x-1)/2;
	return y;
}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(level(x)==level(y))
	{
		while(x!=y)
		{
			x=up(x);
			y=up(y);
		}
	}
	else
		if(level(x)<level(y))
		{
			while(level(x)<level(y))
			{
				y=up(y);
			}
			while(x!=y)
			{
				x=up(x);
				y=up(y);
			}
		}
		else
		{
			while(level(y)<level(x))
			{
				x=up(x);
			}
			while(x!=y)
			{
				x=up(x);
				y=up(y);
			}
		}
	printf("%d",x);
	return 0;
}