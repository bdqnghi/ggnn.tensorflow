//********************************
//*??  ??????        *****
//*????? 1300012753     ***** 
//*???2013.11.20          *****   
//********************************
int cal(int i)
{
	int ans;
	if(i == 1 || i == 2)
	ans = 1;
	else
	{
		ans = cal(i - 1) + cal(i - 2);
	}
	return ans;
}
int main()
{
	int n;
	cin >> n;
	int a[100];
	for(int i = 1; i <= n; i++)
	{
		int t;
		cin >> t;
		a[i] = cal(t); 
	}
	for(int i = 1; i <= n; i++)
	cout << a[i] << endl;
	return 0;
}