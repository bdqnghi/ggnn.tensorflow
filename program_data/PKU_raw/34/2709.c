void main()
{
	int n,ans;
	scanf("%d",&n);
	if(n==1)printf("End");
	else
	{
		for(ans=n;ans!=1;)
		{
			if(ans%2)
			{
				printf("%d*3+1=%d\n\n",ans,ans*3+1);
				ans=ans*3+1;
			}
			else 
			{
				printf("%d/2=%d\n\n",ans,ans/2);
				ans=ans/2;
			}
		}
		printf("End");
	}
}
