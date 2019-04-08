

int main()
{
	int n, i, sum, p, q;
	char a[1001], b[1001];
	cin >> a;
	sum = 0;
	n = strlen(a);
	for(i = 0; i < n - 1; i ++)
	{
		if(a[i + 1] == a[i] || a[i + 1] - a[i] == 32 || a[i] - a[i + 1] == 32)
			sum ++;
		else
		{
			if(a[i] > 'Z')
			{
				p = a[i] - '0';
				q = p - 32;
				b[i] = q + '0';
				cout << "(" << b[i] << "," << sum + 1 << ")";
			}
			else
				cout << "(" << a[i] << "," << sum + 1 << ")";	
			sum = 0;
		}
	}
	sum = 1;
	for(i = n - 1; i > 0; i --)
	{
		if(a[i] == a[i - 1] || a[i] - a[i - 1] == 32 || a[i - 1] - a[i] == 32)
		{
			sum ++;
		}
		else
			break;
	}
	if(a[n - 1] > 'Z')
	{
		p = a[n - 1] - '0';
		q = p - 32;
		b[n - 1] = q + '0';
		cout << "(" << b[n - 1] << "," << sum << ")";
	}
	else
		cout << "(" << a[n - 1] << "," << sum << ")";	
	return 0;
}