//2013.12.1
//zwb

int main ()
{
	char a[1000], ch;
	int n, i, j, k, num = 0, flag = 0, mark = 0;
	cin >> n;

	for(i = 1; i <= n; i++)
	{
		for(j = 0; j < 1000; j++)
			a[j] = '\0';
		cin >> a;
		for(j = 0; a[j] != '\0'; j++)
		{
			num = 0; flag = 0; mark = 0;
			ch = a[j];
			for(k = 0; a[k] != '\0'; k++)
			{
				if(a[k] == ch)
					num++;
				if(num == 2)
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			{
				mark = 1;
				cout << ch << endl;
				break;
			}
		}
		if(mark == 0)
			cout << "no" << endl;
		cin.get();
	}
	return 0;
}

