int main()
{
	int n,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
	scanf("%d",&n);
	for(;;)
	{
		if(n-100>=0)
		{
			a1+=1;
			n-=100;
		}
		else break;
	}
	for(;;)
	{
		if(n-50>=0)
		{
			a2+=1;
			n-=50;
		}
		else break;
	}
	for(;;)
	{
		if(n-20>=0)
		{
			a3+=1;
			n-=20;
		}
		else break;
	}
	for(;;)
	{
		if(n-10>=0)
		{
			a4+=1;
			n-=10;
		}
		else break;
	}
	for(;;)
	{
		if(n-5>=0)
		{
			a5+=1;
			n-=5;
		}
		else break;
	}
	for(;;)
	{
		if(n-1>=0)
		{
			a6+=1;
			n-=1;
		}
		else break;
	}
	printf("%d\n",a1);
	printf("%d\n",a2);
	printf("%d\n",a3);
	printf("%d\n",a4);
	printf("%d\n",a5);
	printf("%d\n",a6);
	return 0;
} 