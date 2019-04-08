int main()
{
	int i,n;
	scanf("%d",&n);
	int *renshi=(int *)malloc(sizeof(int)*n);
	memset(renshi,0,sizeof(int)*n);
	int *beiren=(int *)malloc(sizeof(int)*n);
	memset(beiren,0,sizeof(int)*n);
	while(1)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		if(a==0&&b==0)
			break;
		renshi[a]++;
		beiren[b]++;
	}
	for(i=0;i<n;i++)
	{
		if(renshi[i]==0&&beiren[i]==n-1)
		{
			printf("%d\n",i);
			break;
		}
	}
	if(i==n)
		printf("NOT FOUND\n");
}