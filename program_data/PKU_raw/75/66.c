int main()
{
	int x[1001], y[1001];
	char comma;
	int i, j;
	for(i = 1;;i++)
	{
		cin >> x[i];
		comma = cin.get();
		if(comma == ',')
			continue;
		if(comma == '\n')
			break;
	}
	for(i = 1;;i++)
	{
		cin >> y[i];
		comma = cin.get();
		if(comma == ',')
			continue;
		if(comma == '\n')
			break;
	}
	int num = i;
	int time[1001] = {0};
	for(i = 1; i <= num; i++)
		for(j = x[i]; j < y[i]; j++)
			time[j]++;
	int max = time[1];
	for(i = 1; i <= 1000; i++)
		if(max < time[i])
			max = time[i];
	cout << num << " " << max << endl;
	return 0;
}

