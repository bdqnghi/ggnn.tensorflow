//********************************
//*??  ???????      *****
//*????? 1300012753     ***** 
//*???2013.11.19          *****   
//********************************
int m, n;
int a[100], b[100];
int ans[200];
void read(int a[], int b[])
{
	cin >> m; 
	cin >> n;
	for(int i = 1; i <= m; i++)
	cin >> a[i];
	for(int i = 1; i <= n; i++)
	cin >> b[i];
}
void sort(int a[], int m)
{
	int temp;
	for(int i = 1; i < m; i++)
	{
		for(int j = i + 1; j <= m; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void add(int a[], int b[])
{
	for(int i = 1; i <= m; i++)
	ans[i] = a[i];
	for(int i = 1; i <= n; i++)
	ans[m+i] = b[i];
}
void out(int a[], int m)
{
	cout << a[1];
	for(int i = 2; i <= m; i++)
	cout << ' ' << a[i];
}
int main()
{
	read(a,b);
	sort(a,m);
	sort(b,n);
	add(a, b);
	out(ans, m+n);
	return 0;
}