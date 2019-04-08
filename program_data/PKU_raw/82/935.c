int main()
{
	int n;
	cin>>n;
	int high[101], low[101], time = 0, continuous[101], max = 0;
	for(int i = 1; i <= n; i ++)
	{
		cin>>high[i]>>low[i];
	}
	for(int j = 1; j <= n; j++)
	{
		if(high[j] >= 90 && high[j] <= 140 && low[j] >= 60 && low[j] <= 90)
		{
			time ++;
			continuous[j] = time;
		}
		else
			continuous[j] = time = 0;
	}
	max = continuous[1];
	for (int k = 1; k <= n; k++)
	{
		if(max < continuous[k])
			max = continuous[k];
	}
	cout<<max<<endl;
	return 0;
}