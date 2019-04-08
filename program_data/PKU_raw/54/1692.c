int m;
void cauclute(int n, int k)
{
	int j=1,i=1;
	while(i<=n)
	{
		for(i=1;i<=n;i++)
		{
			if(i==1)
				m=n*j+k;
			else if(m%(n-1)==0)
				m=m/(n-1)*n+k;
			else
			{
				j+=1;
				break;
			}
		}
	}
	cout << m;
}
int main()
{
	int n,k;
	cin >> n >> k;
	cauclute(n,k);
	return 0;
}