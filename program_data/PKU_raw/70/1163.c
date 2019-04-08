int main()
{
	int n,i,j,t=0;
	cin>>n;
	double a[100][2],k[10000],p=0;
	for ( i = 0 ; i < n ; i ++ )
		cin>>a[i][0]>>a[i][1];
	for ( i = 0 ; i < n ; i ++ )
	{
		for ( j = i + 1 ; j < n ; j ++ )
		{
			k[t++] = sqrt(( a[i][0] - a[j][0] )*( a[i][0] - a[j][0] ) + ( a[i][1] - a[j][1] )*( a[i][1] - a[j][1] ));
		}
	}
	for ( i = 0 ; i < t ; i ++ )
	{
		if (k[i]>p)
			p=k[i];
	}
	printf("%.4f\n", p);
}


