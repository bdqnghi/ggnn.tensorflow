int main()
{
	int a,b,c,i;
	b=0;
	c=0;
	i=0;
	scanf("%d",&a);
	while(getchar()!=EOF)
	{
		if(a>b)
		{
			c=b;
			b=a;
		}
		else if(a==b)
			b=a;
		else
		{
			if(c<=a)
				c=a;
		}
		scanf("%d",&a);
		i++;
	}
	if(b==c||i==1||c==0)
	printf("\nNo");
	else
		printf("\n%d",c);
	return 0;
}

