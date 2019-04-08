int main()
{
	int a100=0,a50=0,a20=0,a10=0,a5=0,a1=0;
	int n;
	scanf("%d",&n);
	if(n>=100)
	{a100=n/100;n=n%100;}
	for(a50=1;a50>=0;a50--)
	{
		if(n<50*a50)continue;
		n=n-50*a50;
		if(n==0){printf("%d\n%d\n%d\n%d\n%d\n%d\n",a100,a50,a20,a10,a5,a1);return 0;}
		for(a20=2;a20>=0;a20--)
		{
			if(n-20*a20<0)continue;
			n=n-20*a20;
			if(n==0){printf("%d\n%d\n%d\n%d\n%d\n%d\n",a100,a50,a20,a10,a5,a1);return 0;}
			for(a10=1;a10>=0;a10--)
			{
				if(n-10*a10<0)continue;
				n=n-10*a10;
				if(n==0){printf("%d\n%d\n%d\n%d\n%d\n%d\n",a100,a50,a20,a10,a5,a1);return 0;}
				for(a5=1;a5>=0;a5--)
				{
					if(n-5*a5<0)continue;
					n=n-5*a5;
					if(n==0){printf("%d\n%d\n%d\n%d\n%d\n%d\n",a100,a50,a20,a10,a5,a1);return 0;}
					for(a1=4;a1>=0;a1--)
					{
						if(n-a1<0)continue;
						n=n-a1;
						if(n==0){printf("%d\n%d\n%d\n%d\n%d\n%d\n",a100,a50,a20,a10,a5,a1);return 0;}
					}

				}
			}

		}
	}
	return 0;


}