//********************************
//*???????? **
//*?????? 1300062706 **
//*???2013.10.31**
//********************************
int main()
{
	int i = 0, j = 0, m, k, x, y, temp, a[1000], b[1000], c[1000] = {0};
	char ch;
	while (cin >> x)
	{
		ch = cin.get();
		while (ch == ',')
		{
			a[i] = x;
			i++;
			cin >> x;
			ch = cin.get();
		}
		if (ch == '\n')
		{
			a[i] = x;
			break;
		}
	}
    while (cin >> y)
	{
		ch = cin.get();
        while (ch == ',')
		{
			b[j] = y;
			j++;
			cin >> y;
			ch = cin.get();
		}
		if (ch == '\n')
		{
			b[j] = y;
			break;
		}
	}
    for (m=0;m<=j;m++)
	{
		for (k=a[m];k<b[m];k++)
		{
			c[k]++;
		}
	}
    for (i=1;i<=999;i++)
	{
		if (c[0] < c [i])
			c[0] = c[i];
	}
	cout << j+1 << " " << c[0] << endl;
	return 0;
}
			
