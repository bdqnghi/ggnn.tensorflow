int main()
{
	char sex[41][7];
	float height[41], b[41], t, s;
	int n, i, j, countM = 0, countF = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> sex[i] >> height[i];
		if (sex[i][0] == 'm')
		{
			countM++;
			b[countM] = height[i];
		}
     	else
		{
			countF++;
			b[n+1-countF] = height[i];
		}
	}
	for (i = 1; i < countM; i++)
		for (j = i + 1; j <= countM; j++)
		{
			if (b[i] > b[j])
			{
				s = b[i];
				b[i] = b[j];
				b[j] = s;
			}
		}
	for (i = countM + 1; i < n; i++)
		for ( j = i + 1; j <= n; j++)
		{
			if (b[i] < b[j])
			{
				t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
		}
	for (i = 1; i < n; i++)
		cout << fixed << setprecision(2) << b[i] << " ";
	cout << b[n] << endl;
return 0;
}