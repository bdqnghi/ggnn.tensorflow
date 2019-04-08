int main()
{
	int n , count, i, j, a[100]={0};

    cin >> n;
    for(i = 1;i<=n;i++)
	{
		cin >> count;
		if(count == 0)cout << "60" << endl;
		else
		{
			for(j = 1; j <= count; j++)
			{
				cin >> a[j];
			}
			
			j = 1;
			while(a[j] + 3 * ( j - 1 ) <= 57 && j <= count)
			{
				j++;
			}
			
			if( a[j] + 3 * (j-1) == 58 || a[j] + 3 * (j - 1) == 59 || a[j] + 3 * (j -1 ) == 60)cout << a[j] << endl;
		    else cout << 60 - 3 * ( j - 1) << endl;
		}
	}

	return 0;
}
