int main()
{
	char a;
	int in[1001] = {0}, out[1001] = {0}, time[1001] = {0}, sumperson = 0, maxperson = 0;
	int i, j;
	for (i = 1; ; i++)
	{
		cin >> in[i];
		cin.get(a);
		sumperson++;
		if (a == '\n')
			break;
	}
	for (i = 1; ; i++)
	{
		cin >> out[i];
		cin.get(a);
		if (a == '\n')
			break;
	}
	for (i = 1; i <= sumperson; i++)
		for (j = in[i]; j < out[i]; j++)
			time[j] += 1;
	for (i = 1; i <=1001; i++)
	{
		if (time[i] > maxperson)
			maxperson = time [i];
	}
	cout << sumperson <<" " << maxperson << endl;
	return 0;
}