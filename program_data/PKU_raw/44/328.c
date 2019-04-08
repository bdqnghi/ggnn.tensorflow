void main()
{
	int reverse(int num); 
	int i,n,c[6];
	for(i=0;i<6;i++)
	{
		scanf("%d",&n);
		c[i]=reverse(n);	
	}
	for(i=0;i<6;i++)
		printf("%d\n",c[i]);
}

int reverse(int num)
{
	int t=0,d;
	if(num==0)
		return 0;
	else if(num>0)
	{
		d=num;
		while(d!=0)
		{
			t=t*10+d%10;
			d=d/10;
		}
		return t;
	}
	else
	{
		d=num*(-1);
		while(d!=0)
		{
			t=t*10+d%10;
			d=d/10;
		}
		return -t;
	}
}