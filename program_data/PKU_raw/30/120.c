int main()
{
	int i,n,jieguo=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i-7)%10==0)
			jieguo=jieguo;
		else if((i/10)==7)
			jieguo=jieguo;
		else if(i%7==0)
			jieguo=jieguo;
		else
			jieguo+=i*i;
	}
	printf("\n%d",jieguo);
	return 0;
}
