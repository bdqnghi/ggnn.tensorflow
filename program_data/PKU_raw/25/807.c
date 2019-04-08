
int a[100] = {0}, len = 1;
void cal(int);
void print();

int main()
{
	int n;
	cin >> n;
	a[0] = 2;
	if(n > 0)
	{
		cal(n);
		print();
	}
	else
	{ 
		cout << "1" << endl;
	}
	return 0;
}

void cal(int x)
{
	int i;
	if(x != 1)
	{
		for(i = 0; i < len; i++)
		{
			a[i] *= 2;
		}
		for(i = 0; i < len; i++)
		{
			if(a[i] >= 10)
			{
				a[i] -= 10;
				a[i+1] += 1;
				if(i == len - 1)
				{
					len++;
				}
			}
		}
		cal(x - 1);
	}
}

void print()
{
	int i;
	for(i = len - 1; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;
}

