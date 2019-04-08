//******************************
//???:5.cpp
//??: ??? 1300012754
//??:2013.10.30
//??:?????
//******************************
int main()
{
	int num = 0;
	int x[1010], y[1010];
	int time[1010];
	int maxpeople = 0;
	char ch;
	int i = 0;
	memset(time, 0, sizeof(time));
	memset(x, 0, sizeof(x));
	memset(y, 0, sizeof(y));
	do
	{
		i++;
		cin >> x[i];
		ch = cin.get();
		num++;
		if(ch != ',')
			break;
	}while(1);
	i = 0;
	do
	{
		i++;
		cin >> y[i];
		ch = cin.get();
		if(ch != ',')
			break;
	}while(1);
	for (int k = 1; k <= num; k++)
	{
		for (int j = x[k]; j < y[k]; j++)
		{
			time[j]++;
		}
	}
	for (int k = 0; k < 1000; k++)
	{
		if (maxpeople < time[k])
			maxpeople = time[k];
	}
	cout << num << " " << maxpeople << endl;
	return 0;
}

