int main()
{
	int a[1000];
	int n,i,j,k;
	int t;
	int d;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		t=k-a[i];
		for(j=i;j<n;j++)
		{
			if(a[j]==t){printf("yes\n");return 0;}
		}

	}
	printf("no");
	return 0;

	
}