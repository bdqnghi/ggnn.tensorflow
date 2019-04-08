int main ( )
{
	int k, m, n, i, j, l, number[100][100], num, *p = NULL;
	cin >> k;
	for(i = 0;i < k;i++)
	{
		cin >> m >> n;
		for(j = 0;j < m;j++)
		{
			for(l = 0;l < n;l++)
				cin >> number[j][l];
		}
		num = 0;
		p = *number;
		for(j = 0;j < n;j++)/*??????????????*/
		{
			if(m == 1)
			{
				num += *(p+j);/*??????????*/
			}
			else
			{
				num = num + *(p+j) + *(*(number+m-1)+j);
			}
		}
		p = *number;
		for(j = 1;j < m-1;j++)/*????????????*/
		{
			if(n == 1)
			{
				num += **(number+j);
			}
			else
			{
				num = num + **(number+j) + *(*(number+j)+n-1);
			}
		}
		cout << num <<endl;
	}
	return 0;
}