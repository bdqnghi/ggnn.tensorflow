int main ()
{
	int n, n1, num[101][101], i, j, k, min = 99999, sum = 0;
	int (*p)[101];
	cin >> n;
	for (k = 0; k < n; k++)
	{    n1= n;
	    for (i = 0; i < n; i++)
		    for (j = 0; j < n; j++)
			    cin >> num[i][j];
			p = num;
        for (; n1 >= 2; n1--)
		{
	        
	        for (i = 0; i < n1; i++)
			{
		        for (j = 0; j < n1; j++)
				{
			        if (*(*(p + i) + j) < min)
				       min = *(*(p + i) + j);
				}
		        for (j = 0; j < n1; j++)
			        *(*(p + i) + j) -= min;
				min = 99999;
			}
	        min = 99999;
	        for (j = 0; j < n1; j++)
			{
		        for (i = 0; i < n1; i++)
				{
			        if (*(*(p + i) + j)< min)
				        min = *(*(p + i) + j);
				}
		        for (i = 0; i < n1; i++)
			        num[i][j] -= min;
				min = 99999;
			}
			sum += *(*(p + 1) + 1);
	        min = 99999;
			for (i = 1; i < n1 - 1; i++)
				for (j = 0; j < n1; j++)
					*(*(p + i) + j) = *(*(p + i + 1) + j);
			for (j = 1; j < n1 - 1; j++)
				for (i = 0; i < n1; i++)
				*(*(p + i) + j) = *(*(p + i) + j + 1);

		}
         cout << sum << endl;
		 sum = 0;
	}
		return 0;
}