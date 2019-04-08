
int main()
{
	int i,n,a,b;
	int N[20];
	scanf("%d",&n);
	for(a=0;a<=n-1;a++)
		scanf("%d",&N[a]);
	int f[20]={1,1};
	for(i=2;i<20;i++)
	{
		f[i]=f[i-2]+f[i-1];
	}
	for(a=0;a<=n-1;a++)
	{
		b=N[a]-1;
	printf("%d\n",f[b]);
	}
	return 0;
}
