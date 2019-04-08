int main()
{
	int x[1000], y[1000];                             //????????
	int cnt = 0;
	int man[1000] = {0};
	int manmax = 0;
	int xmin, ymax;
	xmin = INT_MAX;                                   //???
	ymax = INT_MIN;
	char ch;
	for ( int q = 0; q <= 1000; q++ )                 //????????ch??","???
	{
		cin >> x[q];
		ch = cin.get();
		cnt++;                                        //?????
		if ( ch != ',' )
			break;
	}
	for ( int o = 0; o <= 1000; o++ )
	{
		cin >> y[o];
		ch = cin.get();
		if ( ch != ',' )
			break;
	}
	for ( int w = 0; w < cnt; w++ )                   //??????????
	{
		if ( x[w] <= xmin )
			xmin = x[w];
	}
	for ( int z = 0; z < cnt; z++ )                       //??????????
	{
		if ( y[z] >= ymax )
			ymax = y[z];
	}

	for ( int i = xmin; i < ymax; i++ )               //?????????????????
	{
		for ( int j = 0; j < cnt; j++ )
		{
			if( x[j] <= i && y[j] > i )
				man[i] ++;
		}
	}

	for ( int t = xmin; t < ymax; t++ )               //??????????????
	{
		if ( man[t] >= manmax )
			manmax = man[t];
	}
	cout << cnt << " " << manmax;
	return 0;
}




