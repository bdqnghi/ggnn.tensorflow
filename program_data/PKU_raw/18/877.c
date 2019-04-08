

int main()
{
	int maze[100 + 10][100 + 10] = {0};

	int i, j, k, l;
	int n;
	cin >> n;
	
	
	for(k = 0; k < n; k++)
	{
		int sum = 0;
		for(i = 0; i < n; i++)
			for(j = 0; j < n ;j++)
				cin >> maze[i][j];
		
		
		for(l = n; l >= 2; l--)
		{
			for(i = 0; i < l; i++)
			{
				int min = 1000000;
				for(j = 0; j < l; j++)
					min = min < *(*(maze + i) + j) ? min : *(*(maze + i) + j);
				for(j = 0; j < l; j++)
					*(*(maze + i) + j) -= min;
			}
			
			for(i = 0; i < l; i++)
			{
				int min = 1000000;
				for(j = 0; j < l; j++)
					min = min < *(*(maze + j) + i) ? min : *(*(maze + j) + i);
				for(j = 0; j < l; j++)
					*(*(maze + j) + i) -= min;
			}
			sum += *(*(maze + 1) + 1);
			for(i = 1; i < l - 1; i ++)
			{
				for(j = 0; j < l; j++)
					*(*(maze + i) + j) = *(*(maze + i + 1) + j);
			}
			for(i = 1; i < l - 1; i++)
			{
				for(j = 0; j < l; j++)
					*(*(maze + j) + i) = *(*(maze + j) + i + 1);
			}
		}
		
		cout << sum << endl;
	}
	
	return 0;
}

