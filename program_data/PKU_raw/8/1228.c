
int n1, n2, a1[10000], a2[10000],a3[20000];

void input(void)
{
	cin >> n1 >> n2;
	for (int i = 0; i < n1; i++)
	{
		cin >> a1[i];
	}
	for (int i = 0; i < n2; i++)
	{
		cin >> a2[i];
	}
}

void sort(void)
{
	for (int i = 0; i < n1 - 1; i++)
	{
		for (int j = 0; j < n1 - i - 1; j++)
		{
			if (a1[j]>a1[j + 1])
			{
				int temp = a1[j + 1];
				a1[j + 1] = a1[j];
				a1[j] = temp;
			}
		}
	}

	for (int i = 0; i < n2 - 1; i++)
	{
		for (int j = 0; j < n2 - i - 1; j++)
		{
			if (a2[j]>a2[j + 1])
			{
				int temp = a2[j + 1];
				a2[j + 1] = a2[j];
				a2[j] = temp;
			}
		}
	}
}

void joint(void)
{
	for (int i = 0; i < n1; i++)
	{
		a3[i] = a1[i];
	}
	for (int i = 0; i < n2; i++)
	{
		a3[n1 + i] = a2[i];
	}
}

void display(void)
{
	cout << a3[0];
	for (int i = 1; i < n1 + n2; i++)
	{
		cout << ' ' << a3[i];
	}
	cout << endl;
}

int main()
{
	input();
	sort();
	joint();
	display();
	return 0;
}

