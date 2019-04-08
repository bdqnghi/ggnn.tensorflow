
void apple(int, int, int);
int sum;

int main()
{
	int t, m, n;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		sum = 0;
		cin >> m >> n;
		apple(0, m, n);
		cout << sum << endl;
	}
	return 0;
}

void apple(int s, int x, int y)
{
	int i;
	if(y == 1)
	{
		sum++;
	}
	else
	{
		for(i = s; i <= x/y; i++)
		{
			apple(i, x - i, y - 1);
		}
	}
}
