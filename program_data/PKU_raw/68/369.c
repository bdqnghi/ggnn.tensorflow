void main()
{
	
	int t,a=6,a1,a2,i;
	scanf("%d",&t);
	
	
	
	while(a<=t)
		
	{
		for(a1=3;a1<=a/2;a1+=2)
	{
		for(i=3;i<=sqrt(a1);i+=2)
		{
			if(a1%i==0) break;
		}
		
		if(i>sqrt(a1))
			{
			a2=a-a1;
		
			for(i=3;i<=sqrt(a2);i+=2)
				{
				if(a2%i==0) break;
				}
			if (i>sqrt(a2)) 
			{
				printf("%d=%d+%d\n",a,a1,a2);a1=a;
			}
			}
		
	}
	a=a+2;
	}

}