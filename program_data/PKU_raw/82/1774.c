int main ()
{
	int n , i , ss , sz , p , q;
	int a[100];
	for (i = 0 ; i <=99 ; i++)
	{
		a[i] = 0;
	}
	p = 0 ;
	cin >> n ;
	for (i = 1 ; i <= n ; i++)
	{
		cin >> ss >> sz ;
		if ((ss >= 90) && (ss <= 140) && (sz >= 60) && (sz <= 90))
		{
			a[p] = a[p] + 1;
		}
		else 
		{   
			p = p + 1;
		}
	}
		q = 0;
		for (i = 0 ; i <= 99 ; i++)
		{
			if (a[i] > a[q]) 
			{
				q = i ;
			}
		}
	
		cout << a[q] << endl ;
		return 0 ;
	}
