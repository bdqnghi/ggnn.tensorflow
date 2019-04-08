
int main()
{
	int n,i,j,k = 0,flag = 0;
	int num[1000]={0};
	cin >> n ;
	num[0] = 1;
	for (i = 1; i <= n; i ++)
	{
		
		for (j = 0 ; j <= k; j ++)
		{
			num[j] = num[j] * 2 + flag;
			flag = 0;
			if (num[j] >= 10)
			{
				num[j] = num[j] - 10;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			k ++;
			num[k] = 1;
			flag = 0 ;
		}
	}
	for ( i = k ; i >=0 ; i -- )
		cout << num[i];
	return 0;

}