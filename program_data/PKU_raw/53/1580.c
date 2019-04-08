int main()
{
	int str[301];
	char a[500]={0};
	int n,i,dd=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&str[i]);
	for(i=0;i<n;i++)
	{
		if(a[str[i]]==0)
		{
			if(dd==1)
			printf(",");
			dd=1;
			printf("%d",str[i]);
			a[str[i]]=1;
		}
	}
	printf("\n");
	return 0;
}