int main()
{
	int a,b,c,x,m1,m2,i;
	i=3;
	scanf("%d",&a);
	scanf("%d%d",&b,&c);
	if (b>c)
		{
			m1=b;
			m2=c;
		}
		else
		{
			m1=c;
			m2=b;
		}
	while(i<=a)
	{
		scanf("%d",&x);
		if(x>m1)
		{
			m2=m1;
			m1=x;
		}
		else if(x>m2)
		{
			m2=x;
		}
		else
		{
			x=x;
		}
		i++;
	}
	printf("%d\n%d\n",m1,m2);
	return 0;
}

		
		

