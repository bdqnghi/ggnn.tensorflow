int main()
{
	int a[5][5] ,g = 0;
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++)
			cin >> a[i][j];
	for(int m = 0; m < 5; m++)
	{	
		int max = a[m][0], p = 0;
		for(int j = 0; j < 5; j++)
		{
			if(max < a[m][j])
			{
				max = a[m][j];
				p = j;
			}
		}
		int min = a[0][p];
		for(int k = 0; k < 5; k++)
		{
			if(min > a[k][p])
				min = a[k][p];
		}
		if(max == min)
		{
			cout << m + 1 << " " << p + 1 << " " << max << endl;
			g++;
		}
	}
	if(g == 0)
		cout << "not found" << endl;
	return 0;
}
			
				
		


			