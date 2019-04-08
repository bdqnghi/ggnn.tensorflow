int main()
{
	double a[15] , num , cnt   ;
	int i;
	for(int n = 0 ; n <= 99999 ; n++)
	{
		cnt = 0;
		for( i = 0 ; i <= 15 ; i++)
		{
			cin >> num;
			if(num == 0)break;
			else 
				a[i] = num;
		}
		if(a[0] == -1)break;
		else
		{
			for(int j = 0 ; j <= i - 1 ; j++)
				for(int k = 0 ; k <= i - 1 ; k++)
					if(a[j] == 2 * a[k])
						cnt++;
		}
		cout << cnt << endl;
		
	}
	return 0;
}