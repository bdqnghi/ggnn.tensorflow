int main()
{
	char sex[40][7];
	double height[40], male[40]={0.00}, female[40]={0.00};
	int n, num_male, num_female;
	cin >> n;
	int i, j = 0, k = 0;
	double temp;
	for ( i = 0; i < n; i ++)
	{
		cin >> sex[i] >> height[i];
		if ( strcmp(sex[i],"male")==0 )
		{
			male[j] = height[i];
			j ++;
		}
		else
		{
			female[k] = height[i];
			k ++;
		}
	}
	for ( num_male = 0; num_male < n; num_male ++)
	{
		if (male[num_male] <= 0)
			break;
	}
	for ( num_female = 0; num_female < n; num_female ++)
	{
		if (female[num_female] <= 0)
			break;
	}
	for ( i = 0; i < num_male - 1; i ++)
		for ( j = 0; j < num_male - i - 1; j ++)
		{
			if (male[j] > male[j + 1])
			{
				temp = male[j];
				male[j] = male[j + 1];
				male[j + 1] = temp;
			}
		}
	for ( i = 0; i < num_female - 1; i ++)
		for ( j = 0; j < num_female - i - 1; j ++)
		{
			if (female[j] > female[j+1])
			{
				temp = female[j];
				female[j] = female[j + 1];
				female[j + 1] = temp;
			}
		}
	cout << fixed << setprecision(2) << male[0];
	for ( i = 1; i < num_male; i ++)
		cout << fixed << setprecision(2) <<" "<< male[i];
	for ( i =( num_female - 1); i >= 0; i --)
		cout << fixed << setprecision(2) <<" "<< female[i];
	return 0;
}


