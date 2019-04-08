int main()
{
	int a[6][6];
	int i, j, y, max, flag ;
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
		{
			cin >> a[i][j];
		}	
	for(i = 0; i < 5; i++)
	{	
		max = a[i][0]; y = 1;
		for(j = 0; j < 5; j++)	
		{	
			if(a[i][j] > max)
			{
				max = a[i][j];
				 y = j + 1;
			}
		}
		flag = 1;
		for(int k = 0; k < 5; k++)
			if(a[k][y-1] < max) {flag = 0 ; continue;}
		if(flag == 1) { cout << i+1<<  " " << y << " " << max ; break;}
	}
	if(flag == 0) cout << "not found" ;
	return 0;

}
