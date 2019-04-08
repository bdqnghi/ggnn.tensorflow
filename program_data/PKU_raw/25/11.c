//********************************************
//* file : 1000012912_002.cpp                *
//* author : ???                          *
//* data : 2010.12.15                        *
//* function : ??2?N??                  *
//********************************************
int main()
{
	int n, i, j, ans[101];                       //ans???????100?
	cin >> n;
	memset(ans,0,sizeof(ans));                   //??????1
	ans[0] = 1;
	for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < n; j++ )
			ans[j] = ans[j]* 2;                  //???2
		for ( j = 0; j < n; j++ )
			if ( ans[j] >= 10 )
			{
				ans[j+1] += ans[j] / 10;            //??
				ans[j] %= 10;
			}
	}
	while ( ans[i] == 0 )
		i--;
	for(; i >= 0; i-- )
		cout << ans[i];
	cout << endl;
	return 0;
}
			
