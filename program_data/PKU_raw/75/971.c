int main ()
{
	int time[3][1005]={0}, i=1,j, num, tmax=0;
	int count[1005]={0}, countmax=0;
	char p=0;
	while ( p!='\n' )
	{
		cin >> time [1][i];
		p = cin.get();
		i++;
	}
	p=0,i=1;
	while ( p!='\n' )
	{
		cin >> time [2][i];
		p = cin.get();
		i++;
	}
	num = i-1;
	for ( i=1; i <=num; i++ )
		if ( time[2][i] > tmax )
			tmax = time [2][i];
	for ( i=1; i<=tmax; i++ )
	{
		for ( j=1; j <= num; j++ )
		{
			if ( time [2][j] > i &&  time [1][j] <= i )
				count[i]++;
		}
	}
	for ( i=1; i<=tmax; i++)
		if ( count[i] > countmax )
			countmax=count[i];
	cout << num << " " << countmax << endl;
	return 0;
}
