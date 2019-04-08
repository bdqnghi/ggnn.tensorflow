

/**
* @author ??
* @date 2010-12-8
* @description
* ??????:?????? 
*/

int main()
{
	int n, a[10000]= {0}, b[10000] = {0}, x, y, flag = 0;
	cin >> n >> x >> y;
	while(x || y)
	{
		a[x]++;
		b[y]++;
		cin >> x >> y;
	}
	for (int i = 0; i < n; i++)
	{
		if (!a[i] && (b[i] == n - 1))
		{
			cout << i << endl;
			flag = 1;
		}
		if (flag)
			break;
	}
	if (!flag)
		cout << "NOT FOUND" << endl;

	return 0;
}
	