int main()
{
	char a[100];
	int re[100], i = 0, j, k = 0, m = 0, n = 0;
	cin >> a;	
	while (a[i] != 0)
		i ++;	
	for (j = 0; j < i; j ++)
	{
		re[j] = (k * 10 + a[j] - '0')/ 13;    
		m ++;	
		k = (k * 10 + a[j] - '0')% 13;		
	}
	while (re[n] == 0)
		n ++;		
	if (n == m)     
		cout << "0" << endl;   
	else
	{
		for (; n < m; n ++)
			cout << re[n];		   
		cout << endl;		
	}
	cout << k << endl;      
	return 0;
}