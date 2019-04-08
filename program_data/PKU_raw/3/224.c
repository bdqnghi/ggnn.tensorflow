
int main(int argc, char* argv[])
{
	int n,k,a[1000],b=0;
	scanf("%d %d",&n,&k);
	for(int t=0;t<n;t++)
	{
		scanf(" %d",&a[t]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=n-1; j>i;j-- )
		{
			if(a[i]+a[j]==k)
			{
				b=1;
				printf("yes\n");
				return 1;
			}
			
		}
	}
	if(b==0)
	{
		printf("no\n");
	}

	return 0;
}