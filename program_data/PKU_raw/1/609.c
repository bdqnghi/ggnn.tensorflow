int main()
{
	int i,n;
	int fun(int n,int begin);
	scanf("%d",&i);
	while (i-->0)
	{
		scanf("%d",&n);
		printf("%d\n",fun(n,2));
	}
	return 0;
}
int fun(int n,int begin)
{
	int i,result=1;
	for (i=begin;i<=sqrt(n);i++)
		if (n%i==0)
			result+=fun(n/i,i);
	return result;
}