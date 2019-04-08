/*
 * file    homework 9_6
 * author  ??
 * date    2010-11-24
 * description
           ?????????????????
*/



int main()
{
	int n, m, s, i;
	int a[15];
	cin >> n;
	while(n --)
	{
		cin >> m;
		if (m == 0)
		{   cout << 60 << endl;   continue;  }
		for (i = 0; i < m; i ++)
			cin >> a[i];
		for (i = 0; i < m; i ++)
		{
			if (a[i] + i * 3 >= 60)
			{  s = 60 - i * 3;   break;  }
			if (a[i] + i * 3 + 3 >= 60)
			{  s = a[i];  break;  }
		}
		if (i == m)
			s = 60 - m * 3;
		cout << s << endl;
	}
	return 0;
}
