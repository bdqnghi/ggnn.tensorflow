int main()
{
    int n;
	int result=0;
	scanf("%d",&n);	
	for(;n>0;n--)
	{
		if(!(n%7==0 || n%10==7 || (9>= n-70 && n-70>=0)))
			result+= n * n;
	}
	printf("%d",result);
	return 0;
}
