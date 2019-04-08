
char a[100], b, g;
int x[100], y[100];
int l;

void couple(int n)
{ 
	if(n == 0)
		return;
	else
	{
		for(int i = 0; i < l-1; i++)
		{
			int j = i + 1;
			if(a[i] == b)
			{
				while(a[j] == '0')
					j++;
				if(a[j] == g)
				{
					cout << i << " " << j << endl;
					a[i] = a[j] = '0';
					return couple(n-2);
				}
			}
		}

	}
}

int main()
{
	cin >> a;
	l = strlen(a);
	b = a[0];
	for(int i = 1; i < l; i++)
	{
		if(a[i] != b)
		{
			g = a[i];
			break;
		}
	}
	couple(l);
	return 0;
}
