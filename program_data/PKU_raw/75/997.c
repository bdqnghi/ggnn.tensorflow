//****************************************
//*???????                       **
//*?????? 1100012763              **
//*???2011.11.14                     **
//****************************************
int main() 
{
	int count , i , j , ans;
	int a[L] , b[L] , num[L];
	char zifu;

	count = 0;
	while (1)
	{
		count++;
		cin >> a[count];
		zifu = cin.get();
		if (zifu == 10)
			break;
	}
	for (i = 1; i <= count; i++)
	{
		cin >> b[i];
		zifu = cin.get();
	}
	ans = 0;
	for (i = 1; i <= L; i++)
		num[i] = 0;
	for (i = 1; i <= count; i++)
	{
		for (j = a[i]; j <b[i]; j++)
		{
			num[j]++;
			if (num[j] > ans)
				ans = num[j];
		}
	}
	cout << count << ' ' << ans;
	return 0;
}