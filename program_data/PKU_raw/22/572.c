void main()
{
	char t;
	int i,k,m,a,b;
	scanf("%d",&a);
	b=0;
	m=0;
	while(scanf(",%d",&i))
	{
		if(i>a)
		{
			b=a;
			a=i;
			m=0;
		}
		if(i==a)
			m=1;
		if(i<a&&i>b)
		  b=i;

	}
	if(b==0)
		printf("No");
	if(b>0)
		printf("%d",b);
	
}