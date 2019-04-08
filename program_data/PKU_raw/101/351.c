int main()
{
	int a,b,c,i,j,k;
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			for(k=1;k<4;k++)
			{
				a=i;
				b=j;
				c=k;
	if((a<b&&c==a)&&(a>b||a>c)&&!(c>b||b>a))
	{
		printf("CBA");
		return 0;
	}

	if((a<b&&c==a)&&!(a>b||a>c)&&(c>b||b>a))
	{
		printf("BCA");
		return 0;
	}
	if((a<b||c==a)&&!(a>b||a>c)&&(c>b&&b>a))
	{
		printf("BAC");
		return 0;
	}
	if((a<b||c==a)&&(a>b&&a>c)&&!(c>b||b>a))
	{
		printf("CAB");
		return 0;
	}
	if(!(a<b&&c==a)&&(a>b&&a>c)&&(c>b||b>a))
	{
		printf("ACB");
		return 0;
	}
	if(!(a<b&&c==a)&&(a>b||a>c)&&(c>b&&b>a))
	{
		printf("ABC");
		return 0;
	}
			}
		}
	}
	return 0;
}