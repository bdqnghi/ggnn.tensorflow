
void main()
{
	int n,i,a;
	int num[20]={1,1};
	for(i=2;i<20;i++)
	{
		num[i]=num[i-1]+num[i-2];
	}
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		printf("%d\n",num[a-1]);
	}
}