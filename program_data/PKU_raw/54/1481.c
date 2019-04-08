
int ava(int a,int n ,int k)
{
	int num=a;
	for (int i = 1;i<=n-1;i++)
	{
		if ((num*n+k)%(n-1)!=0)
		{
			return 0;
		}
		else
		{
			num = (num*n+k)/(n-1);
		}
	}
	return (num*n+k);
	
}
int main()
{
int n,k;
cin>>n>>k;
int num;
for (int p = 1;;p++)
{
	num = ava(p,n,k);
	if (num !=0)
	{
		break;
	}
}
cout<<num;

}