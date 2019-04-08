
int main ()
{
	int m, i1, i2, k, a, b = 0;
	cin >> m;
	for (i1 = 3; i1 <= (m / 2); i1 += 2)
	{
		a = sqrt(m);
		b = 0; 
		for (k = 2; k <= a; k++)   
		{
			if (k == i1)
				break;
			if (i1 % k == 0)
				b = b + 1;
		}
		if (b == 0)
		{
			i2 = m - i1;
			b = 0;
            for (k = 2; k <= a; k++)   
			{
				if (k == i2)
					break;
		 		if (i2 % k == 0)
					b = b + 1;
			}
		}
		if (b == 0)
			cout << i1 << " " << i2 << endl;
	}
	return 0;
}

