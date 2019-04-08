
int main()
{
	int a[5][5], max[5], min[5], maxx[5], maxy[5], minx[5], miny[5];
	int i, j, g = 0;

	for (i = 0; i < 5; i++)
	{	
		max[i] = INT_MIN;
		for (j = 0; j < 5; j++)
		{
			cin >> a[i][j];
		    if (max[i] < a[i][j])
			{
			    max[i] = a[i][j];
				maxx[i] = i;
				maxy[i] = j;
			}
		}
    }
	for (j = 0; j < 5; j++)
    {
	    min[j] = INT_MAX;
		for (i = 0; i < 5; i++)
			if (min[j] > a[i][j])
			{
			    min[j] = a[i][j];
				minx[j] = i;
				miny[j] = j;
			}
	}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (maxx[i] == minx[j] && maxy[i] == miny[j])
			{	
				cout << maxx[i] + 1 << " " << maxy[i] + 1<< " " << a[maxx[i]][maxy[i]] << endl;
				g = 1;
			}
	if (g == 0)
		cout << "not found" << endl;
		return 0;
}