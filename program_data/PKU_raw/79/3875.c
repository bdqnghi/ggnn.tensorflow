

int main()
{
	int a[301], n, m, k, t, count;
	
	cin >> n >> m;
	
	while((n != 0) && (m != 0))
	{
		for (k = 1; k <= n; k++)
			a[k] = 1; 
	
		k = 0; t = 0; count = 0; 
	
		while(count < n)
		{  	
			k++;
			if(k == n + 1)
				k = 1;
			if ( a[k] != 0 )
			{ 
				t++;
				if ( t == m )
				{ 
					a[k] = 0; t = 0;
					count++;
				}
			}
		}

		cout << k <<endl;
		
		cin >> n >> m;
	}

	return 0;
} 
