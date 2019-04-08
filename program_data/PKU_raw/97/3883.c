int main()
{
	int n,i;
	int a[6]={100,50,20,10,5,1};
	int b[6]={0};
	scanf("%d",&n);
	for(i=0;i<6;i++)
	{
		while(n>=a[i])
		{
			b[i]++;
			n-=a[i];
		}
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}