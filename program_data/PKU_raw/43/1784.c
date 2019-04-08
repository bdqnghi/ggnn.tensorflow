main()
{
	int m,a,b,x,y,i,j,p1,p2;
	scanf("%d\n",&m);
	for(a=3;a<=(m/2);a=a+2)
	{
		b=m-a;
		p1=1;
		p2=1;
		for(i=2;i<a;i++)
		{
			x=a%i;
			if(x==0)
			{
				p1=0;
				break;
			}
		}
		for(j=2;j<b;j++)
		{
			y=b%j;
			if(y==0)
			{
				p2=0;
				break;
			}
		}
		if(p1!=0&&p2!=0)
			printf("%d %d\n",a,b);
	}
	return 0;
}