int main()
{
	int n, i ,j, f = 0, m=0;
	float height[41] = {0}, female[41], male[41];
	char gender[41][7] = {'\0'};
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> gender[i] >> height[i];
	for(i = 0; i < n ;i++)
	{
		if(gender[i][0] == 'm')		
			male[m++] = height[i];	 
		else
			female[f++] = height[i];
	}
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < m - 1 - i; j++)
		{
			if(male[j] > male[j + 1])
			{
				double temp = male[j];
				male[j] = male[j + 1];
				male[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < f; i++)
	{
		for(j = 0; j < f - 1 - i; j++)
		{
			if(female[j] < female[j + 1])
			{
				double temp = female[j];
				female[j] = female[j + 1];
				female[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < m; i++)
		cout << fixed << setprecision(2) << male[i] << " ";
	for(i = 0; i < f - 1; i++)
		cout << fixed << setprecision(2) << female[i] << " ";
	cout << fixed << setprecision(2) << female[f - 1] << endl;
	return 0;
}

