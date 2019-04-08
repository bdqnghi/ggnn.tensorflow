int main()
{
	int n,k,i,j;
	scanf("%d%d",&n,&k);
	int a[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int m=0;
	for(i=0;i<n-1;i++)
	{
		int isbreak=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{printf("yes\n");
			m=1;
			isbreak=1;
			break;}
		}
		if(isbreak==1)
			{break;}
	}
	if(m==0)
	{printf("no\n");}
	return 0;
}
