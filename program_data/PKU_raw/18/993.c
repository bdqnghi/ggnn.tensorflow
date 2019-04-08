int main()
{
	int i,j,k,n,t,minrow,mincol,sum;
	int p[100][100];
	cin >> n;
	for(k = 0 ; k < n ; k++)
	{
		sum = 0;
		t = n;
		for(i = 0 ; i < t ; i++)
		{
			for(j = 0 ; j < t ; j++)
			{
				cin >> *(*(p + i) + j);
			}
		}
		while(t != 1)
		{
			for(i = 0 ; i < t ; i++)
			{
				minrow = 100000;
				for(j = 0 ; j < t ; j++)
				{
					if(*(*(p + i) + j) < minrow)
					{
						minrow = *(*(p + i) + j);
					}
				}
				for(j = 0 ; j < t ; j++)
				{
					*(*(p + i) + j) = *(*(p + i) + j) - minrow;
				}
			}
			for(j = 0 ; j < t ; j++)
			{
				mincol = 100000;
				for(i = 0 ; i < t ; i++)
				{
					if(*(*(p + i) + j) < mincol)
					{
						mincol = *(*(p + i) + j);
					}
				}
				for(i = 0 ; i < t ; i++)
				{
					*(*(p + i) + j) = *(*(p + i) + j) - mincol;
				}
			}
			sum += *(*(p + 1) + 1);
			for(i = 0 ; i < t ; i ++)
			{
				for(j = 1 ; j < t ; j++)
				{
					*(*(p + i) + j) = *(*(p + i) + j + 1);
				}
			}
			for(j = 0 ; j < t ; j ++)
			{
				for(i = 1 ; i < t ; i++)
				{
					*(*(p + i) + j) = *(*(p + i + 1) + j);
				}
			}
			t--;
		}
		cout << sum << endl;
	}
	return 0;
}
