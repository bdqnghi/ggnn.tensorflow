void apple(int, int);
int n, k, m, f = 0;

int main()
{
	cin >> n >> k;
	while(1)
	{
		apple(m, n);
		if(f == 1)
			break;
		m++;
	}
	cin >>m;
	return 0;
}

void apple(int h, int p)
{
	if(p == 1)
	{
		if((h - k) / n <= 0)
			return;
		else
		{
			if((h - k) % n == 0)
			{
				cout << m << endl;
				f = 1;
			}
			else
				return;
		}
	}
	if((h - k) % n == 0)
		apple(h - k - ((h - k) / n), p - 1);
	else
		return;
}