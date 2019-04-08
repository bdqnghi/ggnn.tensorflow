int main()
{
	char a[200] = {0};
	int b[200] = {0};
	int n;
	cin >> n;

	a[0] = '1';
	int i = 0 ;
	for( ; i < n ; i++)
	{
		int j = 0;
		for( ; j < strlen(a) ; j++)
			b[j] = a[j] - '0';
		for(j = 0 ; j < strlen(a) ; j++)
			b[j] = b[j]*2 ;
		
		j = 199;
		while(b[j] == 0)
			j--;
		int k = j + 1;
		for(j = 0 ; j < k; j++)
		{
			b[j+1] += b[j]/10;
			b[j] = b[j]%10;
		}
		
		j = 199;
		while(b[j] == 0)
			j--;
		
		for( ; j >= 0; j--)
			a[j] = b[j] + '0';
	}

	i = 199;
	while(a[i] == 0)
			i--;
	for( ; i >= 0 ; i--)
		cout << a[i] ;
	cout << endl;

	
	return 0;
}