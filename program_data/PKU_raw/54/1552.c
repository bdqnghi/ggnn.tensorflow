

int main()
{
	int n,k,m=0;
	cin>>n>>k;
    int temp=n-1;
	for (int i=1;;)
	{
		m=i*n+k;
		while (m%(n-1)==0)
		{
			m=m/(n-1)*n+k;
			temp--;
			if (temp==0)
			{
				cout<<m;
				break;
			}
		}
		if (temp==0)
			break;
		i++;
		temp=n-1;
	}
	return 0;
}