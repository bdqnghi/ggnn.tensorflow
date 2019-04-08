/*???:?????
**?  ?:??
**?  ?:2010?11?30?
*/
int main()
{
	int r[1000] = {0}, x[1000], y[1000], i = 0, j, n = 0, out_max, max;
	char temp;
	while(1)
	{
		cin >> x[i++];
		temp = cin.get();
		if (temp == 10)
			break;
	}
	i = 0;
	while(1)
	{
		cin >> y[i++];
		temp = cin.get();
		if (temp == 10)
			break;
	}
	n = i;//???,i?0??
	out_max = 0;
	for (i = 0; i < n; i++)
	{
		if (out_max < y[i])
			out_max = y[i];
	}//?????????
	for (i = 0; i < out_max; i++)
		for (j = 0; j < n; j++)
		{
			if (x[j] <= i)
				r[i]++;
			if (y[j] <= i)
				r[i]--;
		}//??????????
	max = r[0];
	for (i = 0; i < out_max; i++)
	{
		if (max < r[i])
			max = r[i];
	}//????????????
	cout << n << " " << max << endl;
	return 0;
}