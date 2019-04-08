
char m[100];
int num = 0;
int q = 0;

void search(int a, int b, char boy, char girl)
{
	if (num == (b + 1) / 2)
		return;
	int i, t;
	for (i = a; i < b; i++)
	{
		if (m[i] == boy)
		{
			for (t = i + 1; t < b; t++)
			{
				if (m[t] != '.')
				{
					break;
				}
			}
			if (m[t] == girl)
			{
				num ++;
				m[i] = '.';
				m[t] = '.';
				break;
			} 
		}
	}
	cout << i << " " << t << endl;
    search(a, b, boy, girl);
}

int main()
{
    char boy, girl;
	int len;
	cin >> m;
	len = strlen(m);
	boy = m[0];
	girl = m[len - 1];
	search(0,len - 1, boy, girl);
	return 0;
}