int main()
{
	int n , i , k1 , k2 , r1 , r2 , m , a , b;
	cin >> n;
	for (i = 6; i <= n; i = i + 2)
	{
		for (m = 3; m <= i / 2; m = m + 2)
		{
			k1 =(int) sqrt((double)m);   
			for (r1 = 2; r1 <= k1; r1 ++)    
			{
				if (m % r1 == 0)      
					break;
			}
			if (r1 == k1 + 1)
			{
				a = m;
				b = i - m;
				k2 =(int) sqrt((double)b);   
				for (r2 = 2; r2 <= k2; r2 ++)    
				{
					if (b % r2 == 0)      
						break;
				}
				if (r2 == k2 + 1)
				{
					cout << i << "=" << a << "+" << b << endl;
					break;
				}
			}
		}
	}
	return 0;
}

				