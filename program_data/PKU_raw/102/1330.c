int main ()
{
	int i, j, n;
	int num1 = 1,num2 = 1;
	float t = 0;
	char gender[10] = {0};
	float h[3][50] ={0};
	cin >> n;
	for ( i = 1; i <= n; i++ )
	{
		cin >> gender;
		if (strlen(gender) == 4 )
			cin >> h[1][num1], num1++;
		else 
			cin >> h[2][num2], num2++;
	}
	for ( i = 1; i <= num1 - 2; i++ )
	{
		for( j = 1; j <= num1 -1- i; j++ )
			if ( h[1][j] > h[1][j+1] )
				t = h[1][j], h[1][j] = h[1][j+1] , h[1][j+1] = t;
	}
	for ( i = 1; i <= num2 - 2; i++ )
	{
		for ( j = 1; j <= num2 - 1 - i; j++ )
			if ( h[2][j] < h[2][j+1] )
				t = h[2][j] , h[2][j] = h[2][j+1], h[2][j+1] = t;
	}
	for ( i = 1; i <= num1 -1; i++ )
		cout <<fixed << setprecision(2) << h[1][i] << " ";
	for ( i = 1; i <= num2 - 2; i++ )
		cout << h[2][i] << " ";
	cout<< fixed << setprecision(2) <<  h[2][num2 - 1] << endl;
	return 0;
}