
int main()
{
	int num;
	
	int i,n[5];
	
	
	scanf("%d",&num);
	if (num>0 && num<10)
	{
	for (i=0;i<1;i++)
	{
		n[i]=num%10;
		num=num/10;
		if (num<1)
			break;
	}
	
	printf("%d\n",n[0]);
	
	return 0;
	}
	if (num>9 && num<100)
	{
	for (i=0;i<2;i++)
	{
		n[i]=num%10;
		num=num/10;
		if (num<1)
			break;
	}
	
	printf("%d%d\n",n[0],n[1]);
	
	return 0;
	}
	if (num>99 && num<1000)
	{
	for (i=0;i<3;i++)
	{
		n[i]=num%10;
		num=num/10;
		if (num<1)
			break;
	}
	
	printf("%d%d%d\n",n[0],n[1],n[2]);
	
	return 0;
	}
	if (num>999 && num<10000)
	{
	for (i=0;i<4;i++)
	{
		n[i]=num%10;
		num=num/10;
		if (num<1)
			break;
	}
	
	printf("%d%d%d%d\n",n[0],n[1],n[2],n[3]);
	
	return 0;
	}
	if (num>9999 && num<100000)
	{
	for (i=0;i<5;i++)
	{
		n[i]=num%10;
		num=num/10;
		
			
	}
	
	printf("%d%d%d%d%d\n",n[0],n[1],n[2],n[3],n[4]);
	
	return 0;
	}
		return 0;
}