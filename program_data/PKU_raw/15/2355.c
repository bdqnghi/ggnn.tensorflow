
int main()
{
	int n, i, j, a[1001][1001], s = 0;
	int (*p)[1001],x1=0,y1=0,x2=0,y2=0;
	cin >> n;
	p = a;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> *(*(p + i) + j);
		}
	}
    for (i=0;i<n;i++)
    {
    for (j=0;j<n;j++)
    {
    if (*(*(p + i) + j) == 0)
    		{
				if ((*(*(p + i) + j + 1) == 0) && (*(*(p + i + 1) + j) == 0))
				{
					x1 = i; y1 = j;
				}
				if ((*(*(p + i) + j - 1) == 0) && (*(*(p + i - 1) + j) == 0))
				{
                    x2 = i; y2 = j;
				}
			}
    }
    }
	s = (x2-x1-1)*(y2-y1-1);
	cout << s << endl;
	return 0;
}