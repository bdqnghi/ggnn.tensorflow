int main()
{
	int a[5][5];
	int rmax[5] = {0}, cmin[5] = {0};
	int i, j;
	int rmaxno[5], cminno[5];
	int f = 0;

	for (i = 0; i <= 4; i++)
		for(j = 0; j <= 4; j ++)
			cin >> a[i][j]; 
	
	for(i = 0; i <= 4; i++)                //????????????
	{
		rmax[i] = a[i][0];
		rmaxno[i] = 0;
		for(j = 0; j <= 4; j++)
		{
			if (rmax[i] < a[i][j])
			{
				rmax[i] = a[i][j];
				rmaxno[i] = j;

			}
		}
	}

	for(j = 0; j <= 4; j++)
	{
		cmin[j] = a[0][j];
		cminno[j] = 0;
		for(i = 0; i <= 4; i++)
		{
			if(cmin[j] >= a[i][j])
			{
				cmin[j] = a[i][j];
				cminno[j] = i;
			}
		}
	}
	

	for(i = 0; i <= 4; i ++)
	{
		if(cminno[rmaxno[i]] == i)
		{
			f = 1;
			cout << i + 1 << " " << rmaxno[i] + 1 << " " << rmax[i] << endl;
		}
	}

	if(f == 0)
	cout << "not found";
	
	
	return 0;

		
}