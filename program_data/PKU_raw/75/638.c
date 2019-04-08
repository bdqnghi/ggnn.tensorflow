//***************************
//*????????        **
//*????? 1300012921   **
//*???2013.10.30        **
//*************************** 
int main()

{
	int x[1001], y[1001], time[1001] = {0};
	int i = 0;
	char ch;
	
	do
	{
		i++;
		cin >> x[i];
		ch = cin.get();
	}while (ch == ',');
	
	i = 0;
	
	do
	{
		i++;
		cin >> y[i];
		ch = cin.get();
	}while (ch == ',');
	
	for(int j = 1; j <= i; j++)
	{
		for(int k = x[j]; k < y[j]; k++)
			time[k] = time[k] + 1;
	}
	
	int max = 0;
	for(int l = 1; l <= 1000; l++)
	{
		if(time[l] > max)
			max = time[l];
	}
	
	cout << i << " " << max << endl;
	return 0;
} 