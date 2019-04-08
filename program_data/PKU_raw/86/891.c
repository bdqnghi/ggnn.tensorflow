int main()
{
	int n, time, i, j, num[100], shu;
	cin >> n;
	for( i = 0; i < n; i ++ )
	{
		shu = 0;
		memset(num, 0, sizeof(num));
		cin >> time;
		if( time == 0 )
			cout << 60 << endl;
		else
		{
			for( j = 0; j < time; j ++ )
			{
				cin >> num[j];
			}
		    for( j = 0; j < time; j ++ )
			{
				shu = num[j] + 3 * (j + 1);
				if( shu > 60 )
				{
					if( num[j] + 3 * j <= 60 )
					{
						shu = num[j];
						break;
					}
					else
						shu = 60 - ( num[j - 1] + 3 * j ) + num[j - 1];
					    break;
				}
			}
			if( j == time )
				shu = 60 - 3 * time;
			cout << shu << endl;
		}
	}
	return 0;
}