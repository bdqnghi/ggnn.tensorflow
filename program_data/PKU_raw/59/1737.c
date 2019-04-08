//********************************
//*?????? 1300012733 **
//*???2013.11.9  **
//********************************
int main()
{
	char a[109][109]={0};
	char b[109][109]={0};
	int n,day;
	int sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
		for( int j = 1; j <= n; j++)
			cin >> a[i][j];
	memcpy(b,a,sizeof(a));
	cin >> day;
	for( int d = 1; d < day; d++ )
	{
	for(int i = 1; i <= n; i++)
		for( int j = 1; j <= n; j++)
			if((b[i][j] == '.')&&((a[i+1][j] == '@')||(a[i-1][j] == '@')||(a[i][j+1] == '@')||(a[i][j-1] == '@')))
				b[i][j] = '@';
	memcpy(a,b,sizeof(b));
	}
	for(int i = 1; i <= n; i++)
		for( int j = 1; j <= n; j++)
			if(a[i][j] == '@')
				sum++;
	cout << sum;
	return 0;
}