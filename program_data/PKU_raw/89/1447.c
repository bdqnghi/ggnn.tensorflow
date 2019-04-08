int main()
{
	int n, i, p, q, j,k,  person[10000], flag = 0;
	cin >> n;
	for (j = 0; j < 10000; j++)
	{
		person[j] = 0;
	}
	while ((cin >> p) && (cin >> q))
	{
		if ((p == 0) && (q == 0))
		{
			break;
		}
		else
		{
			person[p]--;      // ???p???????????????-1
		    person[q]++;     // p?????????q?????????
		} 
	}
	for (k = 0; k < n; k++)
	{
		if (person[k] == n - 1)
		{
			flag = 1;
			cout << k << endl;
		}
	}
	if (!flag)
	{
		cout << "NOT FOUND";
	}
	return 0;
}
		