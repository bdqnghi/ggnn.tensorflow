int main()
{
	char temp = 0;
	int time[1000] = {0}, t[2][1000] = {0}, num = 0,i = 0, j = 0, max = 0;
	for (i = 0; i < 2; i++, temp = 0)
		for (j = 0; temp != '\n'; j++)
		{
			cin >> t[i][j];
			temp = cin.get();
		}
	num = j;
	for (i = 0; i < num; i++)
		for (j = t[0][i]; j < t[1][i]; j++)
			time[j]++;
	for (i = 0; i < 1000; i++)
		if (time[i] > max)
			max = time[i];
	cout << num << " "<< max;
	return 0;
}