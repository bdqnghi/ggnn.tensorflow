int main()
{
	int a[5][5], i, j, max[5], min[5], max1, min1, place1[5], place2[5], leap = 1;
	for(i = 0; i <= 4; i++)
	{
		for(j = 0; j <= 4; j++)
		{
			cin >> a[i][j];
		}
	}
	for(i = 0; i <= 4; i++)
	{
		max1 = 0;
		for(j = 0; j <= 4; j++)
		{
			if(a[i][j] > max1)
			{
				max1 = a[i][j];
				place1[i] = j;
			}
		}
		max[i] = max1;
	}
	for(j = 0; j <= 4; j++)
	{
		min1 = max[j];
		place2[j] = j;
		int p = place1[j];
	    for(i = 0; i <= 4; i++)
	    {
		    if(a[i][p] < min1)
		    {
			    min1 = a[i][p];
				place2[j] = i;
		    }
		}
		min[j] = min1;
	}
	for(i = 0; i <= 4; i++)
	{
		if(max[i] == min[i])
		{
			cout << place2[i] + 1 << " " << place1[i] + 1 << " " << max[i] << endl;
			leap = 0;
		}
	}
	if(leap == 1)
		cout << "not found" << endl;
	return 0;
}