int main()
{
	int a,b,c,d,e,f,sum=0,i;
	int g=0;
	int m[]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	i=a+1;
	while(i<d)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			sum++;
		}
		i++;
	}
	i=b-1;
	while(i<=11)
	{
		g+=m[i];
		i++;
	}
	g=g-c;
	i=0;
	while(i<e-1)
	{
		g+=m[i];
		i++;
	}
	g=g+f;
	g=g+sum;
	if((a%4==0&&a%100!=0)||(a%400==0))
	{
		if(b<=2)
		{
			g++;
		}
	}
	if((d%4==0&&d%100!=0)||(d%400==0))
	{
		if(e>=3)
		{
			g++;
		}
	}
	if(d>a)
	{
		g=g+(d-a-1)*365;
	}
	else if(a==d)
	{
		if((d%4==0&&d%100!=0)||(d%400==0))
		{
			g=g-366;
		}
		else
		{
			g=g-365;
		}
	}
	printf("%d\n",g);
	return 0;
}
			
				









	
	






	




