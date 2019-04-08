char a[109];
char boy;
char girl;
int l;
void Match()
{
	if( a[0] != boy )
		return;
	int i = 0;
	while( a[i] != girl )
		i++;
	int j = i-1;
	while( a[j] == '0' )
		j--;
	cout<< j << ' ' << i << endl;
	a[i] = a[j] = '0';
	Match();
}
int main()
{
	cin.getline( a , 109 );
	l = strlen( a );
	boy = a[0];
	girl = a[l-1];
	Match();
	return 0;
}