
int main(int argc, char* argv[])
{
	int n,k,a[1000];
	scanf("%d %d",&n,&k);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j&&a[i]+a[j]==k)
			{
				printf("yes");
			    return 0;
			}
		}
	}
	printf("no");
	return 0;
}

