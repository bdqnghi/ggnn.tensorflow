int judge(int a)
{
	if (a/10==7||a==7||a==17||a==27||a==37||a==47||a==57||a==67||a==77||a==87||a==97||a%7==0)
		return 0;
	else
		return a;
}
int main()
{
	int n,k=1,s=0;
	cin>>n;
	while (k<=n)
	{
		s=s+judge(k)*judge(k);
		k++;
	}
	cout<<s;
	return 0;
}