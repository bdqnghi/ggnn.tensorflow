//********************************
//*???????? **
//*?????? 1300062706 **
//*???2013.12.5**
//********************************
int n, k;
int monkey(int m, int i)
{
	if (i == n+1)
		return m;
	else
	{
		if (m%(n-1) == 0)
		    return monkey(m*n/(n-1)+k, i+1);
		else
			return 0;
	}
}
int main()
{
	int i;
	cin >> n >> k;
	for (i=n-1;;i+=n-1)
	{
		if (monkey(i, 1)%n != 0)
		{
			cout << monkey(i, 1) << endl;
			break;
		}
	}
	return 0;
}