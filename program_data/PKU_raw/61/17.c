int f(int n)
{
	if(n==1||n==2)
		return 1;
	else
		return f(n-1)+f(n-2);
}
void main()
{
	int n,i,shu[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&shu[i]);
		printf("%d\n",f(shu[i]));
	}
}