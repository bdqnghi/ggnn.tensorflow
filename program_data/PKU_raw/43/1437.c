
int checkprime(int x)
{
	int j;
    int count=0;
	for (j=2;j<=sqrt(x);j++)
	{
		if (x%j==0)
			count++;

	}
	return count;

}
int main()
{
	int i;
	int n;
	cin>>n;
	for (i=2;i<=n/2;i++)
	{
		if (checkprime(i)==0&&checkprime(n-i)==0)
			cout<<i<<" "<<n-i<<endl;
	}
	return 0;
}