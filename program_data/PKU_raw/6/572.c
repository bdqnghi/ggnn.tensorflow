// ?????????? ?? 1000062708
int main()
{
	int ac[100][100], i, j, k, *p, n, a, b, s;
	cin >> n;
	for(i = 0;i < n;i++)
	{
		s = 0;
		cin >> a >> b;
		for(j = 0;j < a;j++)
			for(k = 0;k < b;k++)
				cin >> ac[j][k];
		for(j = 0;j < a;j++)
		{
			if(j == 0 || j == a - 1)
				for(p = ac[j];p < ac[j] + b;p++)
					s += *p;
			else
			{
				p = ac[j];
				s = s + *p + *(p + b - 1);
			}
		}
		cout << s << endl;
	}
	return 0;
}



