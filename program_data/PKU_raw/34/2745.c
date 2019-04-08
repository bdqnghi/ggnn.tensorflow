
int suan(int n)
{
	int temp;
	if(n==1)
	{
		printf("End");
	   return 0;
	   }
	if(n%2==1)
	{
		temp=n;
		n=n*3+1;
		printf("%d*3+1=%d\n",temp,n);
		return suan(n);
	}
	if(n%2==0)
	{
		temp=n;
		n=n/2;
		printf("%d/2=%d\n",temp,n);
		return suan(n);
	}
	
}
		


void main()
{
	int n;
	scanf("%d",&n);
	suan(n);
}
