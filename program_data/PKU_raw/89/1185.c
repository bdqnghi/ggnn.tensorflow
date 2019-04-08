//****************************
//*??????**
//*???????**
//*???2012.12.15**
//****************************
int main()
{
	int n, i, k, p, q;
	struct people
	{
		int a;
		int b;
	}peo[10000] = {0};    //a???????????  b?????????
	cin >> n;
	while (1)
	{
		cin >> p >> q;
		if (p == 0 && q == 0)
			break;
		peo[p].a++;
		peo[q].b++;
	}
	k = 0;
	for (i = 0; i < n; i++)
	{
		if (peo[i].a == 0 && peo[i].b == n - 1)
		{
			cout << i << endl;
			k = 1;
		}
	}
	if (k == 0)
		cout << "NOT FOUND" << endl;
	return 0;
}