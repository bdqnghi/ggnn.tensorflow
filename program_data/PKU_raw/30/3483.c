int main()
{
	int m=0, n, h=0;
	cin >> n;
    for(int j=1; j<=n; j++)
		m=m+j*j;
	for(int i=1; i<=n; i++)
	{
		if(i%7==0)
			h=h+i*i;
		else if(i%10==7)
			h=h+i*i;
		else if(i/10==7)
			h=h+i*i;
	}

	cout << m-h << endl;
	return 0;
}