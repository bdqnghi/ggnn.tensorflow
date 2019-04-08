int main()
{
	int hour[101] ={0}, high, low;
	int n;
	cin >> n;
	int num = 1;
	for(int i = 0; i < n; i++)
	{
		cin >> high >> low;
		if( high >= 90 && high <= 140 && low >= 60 && low <= 90 )
			hour[num] ++;
		else
			num ++;
	}
	int max = 0;
	for(int i = 1; i <= num; i++)
	{
		if( hour[i] > max )
			max = hour[i];
	}
	cout << max << endl;
	return 0;
}