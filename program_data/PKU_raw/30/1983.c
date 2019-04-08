int main()
{
	int i,n,sum;
	sum=0;
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (i%7!=0 && (int)i/10!=7 && i%10!=7)
		{
			sum+=i*i;
		}
		if (i%7==0 || (int)i/10==7 || i%10==7) 
		{
			continue;
		}
	}
	printf("%d",sum);
	return 0;
}

