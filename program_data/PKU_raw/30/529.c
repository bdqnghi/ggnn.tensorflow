int main()
{
    int n;
	int sum=0;
	scanf("%d",&n);
	while(n>0)
	{
	if(n<100)
		if(n%7!=0)
			if(n/10!=7)
				if(n%10!=7)
		sum=sum+n*n;
		n--;
	}
	printf("%d",sum);
	return 0;
}