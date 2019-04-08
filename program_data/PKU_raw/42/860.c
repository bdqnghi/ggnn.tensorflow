//****************************************
//*???????????               **
//*?????? 1100012802              **
//*???2011.10.19                     **
//****************************************
int main()
{
	int n,i,j,k,num=0;
	cin >> n;
	const int m = n;
	int a[m];
	for(i = 0;i <= m-1;i++)
		cin >> a[i];
	cin >> k;
	for(i = 0;i <= m-1;i++)
	{
		while(a[i] == k)
		{
			for(j = i;j <= m-1;j++)
				a[j]=a[j+1];
			num++;
		}
	}
	for(i = 0;i <= m - 2 - num;i++)
		cout << a[i] <<" ";
	cout << a[m - 1 - num];
	return 0;
}