int main()
{
	int n, i, a[100], time[100], j, m;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> m;
		if(m==0)
			cout << "60" << endl;
		else
		{
			for(j=0;j<m;j++)
			{
				cin >> a[j];
				time[j] = a[j] + 3 * j;
			}
			for(j=m-1;j>=0;j--)
			{
				if(time[j]<=57)
				{
					cout << a[j] + 57 - time[j] << endl;
					break;
				}
				else
					if(time[j]<=60)
					{
						cout << a[j] << endl;
						break;
					}
			}
		}
	}

	return 0;
}