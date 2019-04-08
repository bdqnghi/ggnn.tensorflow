int main()
{
	int n;
	scanf("%d",&n);
	if(n<10) printf("%d",n);
	else while(n)
	{printf("%d",n%10);
	 n=n/10;
	}
	return 0;
}
