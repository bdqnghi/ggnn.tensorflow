int main()
{
	int m, n, c;
	cin >> m;
	for (int i = 3; i <= m / 2; i++)
	{
		c = 1;
                  for (int j = 2; j <= i; j++)
		{
			if (i % j == 0 && j != i)
			{   
				c = 0;
				break;
			}
			if (j == i)
			    break;
		}
		if (c)
		{
			n = m - i;
      
			for (int k = 2; k <= n; k++)
			{
			    if (n % k == 0 && n != k)
	                break;
	            if (n == k)
				{
				    cout << i << " " << n << "\n";
				}
			}
        }
	}
	return 0;
}