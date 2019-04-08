int main()
{
	int n100=0,n50=0,n20=0,n10=0,n5=0,n1=0,m=0;
	scanf("%d",&m);

	if (m>=100)
	{
		n100=m/100;
		m=m%(n100*100);
	}
	if (m>=50)
	{
		n50=m/50;
		m=m%(n50*50);
	}
	if (m>=20)
	{
		n20=m/20;
		m=m%(n20*20);
	}
	if (m>=10)
	{
		n10=m/10;
		m=m%(n10*10);
	}
	if (m>=5)
	{
		n5=m/5;
		m=m%(n5*5);
	}
	n1=m;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",n100,n50,n20,n10,n5,n1);
	return 0;
}

