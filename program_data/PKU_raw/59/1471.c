//********************************
//*???????      **
//*?????? 1300012757 **
//*???2013.11.1 **
//********************************
void chuanran(int ,int );
int cz(int );
char a[101][101];
int n;
int main()
{
	extern char a[101][101];
	extern int n;
	int m;
	cin >> n;
	for (int i =0 ; i < n; i ++)
		for (int j = 0 ;j < n; j ++)
			cin >> a[i][j];
	cin >> m;
	for (int p = 1;p <m  ;p ++)
	{
		for (int i = 0; i < n ; i ++)
			for (int j =0 ; j< n ;j ++)
				if (a[i][j] == '@')
					chuanran(i,j);
		for (int i = 0; i < n; i ++)
			for (int j =0 ;j < n; j++)
				if(a[i][j] == '!')
					a[i][j] = '@';
	}
	int sum = 0;
	for (int i = 0; i < n ; i ++)
			for (int j =0 ; j< n ;j ++)
			if (a[i][j] == '@')
				sum ++;
	cout <<sum;
	
	return 0;
}
void chuanran(int x, int y)
{
	extern char a[101][101];
	int p,q,s,t;
	p = cz(x - 1);
	q = cz(x + 1);
	s = cz(y - 1);
	t = cz(y + 1);
	if (a[p][y] == '.')
		a[p][y] = '!';
	if (a[q][y] == '.')
		a[q][y] = '!';
	if (a[x][s] == '.')
		a[x][s] = '!';
	if (a[x][t] == '.')
		a[x][t] = '!';
}
int cz(int x)
{
	extern int n;
	if (x < 0)
		return 0;
	else if (x > n-1)
		return n-1;
	else return x;
}