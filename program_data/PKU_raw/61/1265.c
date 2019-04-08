int f(int a)
{
	if(a==1)
		return 1;
	if(a==2)
		return 1;
	else
		return f(a-1)+f(a-2);
}
int main()
{
	int n=0,m=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>m;
		printf("%d\n",f(m));
	}
	return 0;
}