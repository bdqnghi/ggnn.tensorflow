int main()
{
	int n;
	cin >> n;
	int i , j;
	double num[400] = {0.0};
	double num2[400] = {0.0};

	double sum = 0.0;
	double ave = 0.0;
	int counter = 0;
	for( i = 0 ; i <= n - 1 ; i ++ )
	{
		cin >> num[i];
		sum = sum + num[i];
	}
    ave = sum / n;
	double Max = 0.0 , temp = 0.0; 
	for( i = 0 ; i <= n - 1 ; i ++ )
	{
		temp = fabs( num[i] - ave ); 
		if( temp > Max )
			Max = temp;
	}
	for( i = 0 ; i <= n - 1 ; i ++ )
		if(  fabs( fabs( num[i] - ave ) - Max ) <= 0.00001 )
		{
			num2[counter] = num[i];
			counter ++;
		}
	if( counter == 1 )
		cout << num2[0];
	else
	{
		for( i = 0 ; i <= counter - 2 ; i ++ )
			for( j = i + 1 ; j <= counter - 1 ; j ++ )
			{
				if( num2[i] > num2[j] )
				{
					temp = num2[i];
					num2[i] = num[j];
					num[j] = temp;
				}
			}
		cout << num2[0];
		for( i = 1 ; i <= counter - 1 ; i ++ )
			cout << "," << num2[i];
	}

	return 0;
}
