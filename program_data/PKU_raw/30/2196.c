int main()
{
	int n, i, k;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0) continue;
		else
		{
			for(k=i;k>0;k/=10)
			{
				if(k%10==7) break;
			}  
	        if(k==0) sum+=i*i;
		}	
	}
	printf("%d",sum);
	return 0;
}
