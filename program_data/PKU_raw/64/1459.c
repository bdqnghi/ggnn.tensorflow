int main ()
{
	int a[10][3] = {0};					//????????
	int n = 0;							//??n??????
	cin >> n;
	int i = 0, j = 0, k = 0;			//????????
	for ( i = 0; i < n; i ++ )			//??????
		for ( j = 0; j < 3; j ++ )
			cin >> a[i][j];
	double distance[100] = {0};			//???????????
	double dis = 0;						//?????
	for ( i = 0; i < n; i ++ )			//??????
		for ( j = i + 1; j < n; j ++ )
		{
			for ( k = 0; k < 3; k ++ )
				dis = dis + (a[i][k]-a[j][k])*(a[i][k]-a[j][k]);
			distance[i*10+j] = sqrt(dis);
			dis = 0;
		}
	int b[100] = {0};					//????????????
	for ( i = 0; i < 100; i ++ )
		b[i] = i;
	for ( i = 0; i < 99; i ++ )			//?????
		for ( j = 0; j < 99 - i; j ++ )
		{
			if ( distance[j] < distance[j+1] )
			{
				swap ( distance[j], distance[j+1] );
				swap ( b[j], b[j+1] );
			}
		}
	for ( i = 0; i < n*(n-1)/2; i ++ )	//????????????
	{
		cout << "(" << a[b[i]/10][0] << "," << a[b[i]/10][1] << "," << a[b[i]/10][2] << ")-(";
		cout << a[b[i]%10][0] << "," << a[b[i]%10][1] << "," << a[b[i]%10][2] << ")=";
		printf ( "%.2f", distance[i] );
		cout << endl;
	}
	return 0;
}