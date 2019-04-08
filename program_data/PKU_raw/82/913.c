int main ( )
{
	int n, i, j = 0, xie[100][3], time[100] = {0}, max;
	cin >> n;
	for(i = 0;i < n;i++)
	{
		cin >> xie[i][0] >> xie[i][1];
		if(xie[i][0]>=90 && xie[i][0]<=140 && xie[i][1]>=60 && xie[i][1]<=90)
			xie[i][2] = 1;
		else xie[i][2] = 0;
	}
	for(i = 0;i < n;i++)
	{
		if(xie[i][2] == 1)
			time[j]++;
		else
		{
			j++;
		}
	}
	max = time[0];
	for(i = 0;i < n;i++)
	{
		if(time[i] > max)
			max = time[i];
	}
	cout << max <<endl;
	return 0;
}