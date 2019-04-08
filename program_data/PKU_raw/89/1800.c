
int main()
{
	const int N=10000;
	int a[N]={0},b[N]={0};
	int n;
	scanf("%d",&n);
	int x,y;
	scanf("%d%d",&x,&y);
	while(x || y)
	{
		a[x]=1;
		b[y]++;
		scanf("%d%d",&x,&y);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]) continue;
		if(b[i]==n-1) 
		{
			printf("%d",i);
			exit(0);
		}
	}
	printf("NOT FOUND");
	return 0;
}
