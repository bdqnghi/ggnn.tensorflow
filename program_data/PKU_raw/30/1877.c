int main()
{
	int n, i, k, l, sum=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
           l = i%10;
	  k = (i - l) / 10;
		if(i%7==0||i%10==7||k%10==7)
		{
			continue;
		}
		sum+=i*i;
	}
    printf("%d", sum);
    return 0;
}