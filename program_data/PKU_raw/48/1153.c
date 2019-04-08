//********************************
//*???????????    **
//*????? 1300012990 **
//*???2013.12.07  **
//********************************
int b[9][9], old[9][9];
void num( int a,int e);
void ab(int c,int d);	
int main()
{
	int m,n,i,j;
	memset(b, 0, sizeof(b)); 
	cin >> m >> n;
	b[4][4]=m;
	num(0,n);
	for(i=0;i<=8;i++)
	{
		cout << b[i][0];
		for(j=1;j<=8;j++)
			cout << " " << b[i][j] ;
		cout << endl;
	}
	return 0;
}
void num( int a,int e)
{
	int i,j;
	for(i=0;i<=8;i++)
		for(j=0;j<=8;j++)
			old[i][j]=b[i][j];
	for(i = 4 - a; i <= 4 + a; i++)
		for(j = 4 - a; j <= 4 + a; j++)
			ab(i, j);  
	a++;
	if(a==e)
		return;
	else
		num(a,e);
}
void ab(int c,int d)
{
	int i, j;
	for(i = c - 1; i <= c + 1; i++)
		for(j = d - 1; j <= d + 1; j++)
			b[i][j] = b[i][j] + old[c][d]; 
	return;
}






