main()
{
	int reverse(int num);
	int n,i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&n);
		printf("%d\n",reverse(n));
	}


}
int reverse(int num)
{
	int rev=0;
	if(num>=0)
	{
		while(num)
		{
			rev=rev*10+num%10;
			num=num/10;
		}
	}
	else
	{
		int fan=-num;
		while(fan)
		{
			rev=rev*10+fan%10;
			fan=fan/10;
		}
		rev=-rev;
	}
	return rev;
}
