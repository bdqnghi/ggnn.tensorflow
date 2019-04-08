int main()
{
	int m, i, n, a, b;
	cin >> m;
	for (i = 3; i <= m / 2; i = i + 2)
	{
        a = 0;
		b = sqrt(i);
		for (n = 2; n <= b ; n++)  
		{
			if ((i % n) == 0)   
			{
				a = a + 1;
				break;
			}
		}
        for (n = 2; n <= sqrt(m - i) ; n++)  
		{
			if (((m - i) % n) == 0)   
			{
				a = a + 1;
				break;
			}
		}
		if (a == 0)                    
		    cout << i << " " << m - i << endl;
	}
	return 0;
}