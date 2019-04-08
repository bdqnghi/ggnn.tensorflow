//*****************************************
//*   ????                            *
//*   ??????                        *
//*   ?????2011?12?12?            *
//*****************************************


int main()
{
	int n, i, *p, *q, num, flag, sum, a[500000], b[500000];
	cin >> n;
	num = 0;
	flag = 0;
	sum = 0;
	for(i = 0; ; i ++)
	{
		cin >> a[i] >> b[i];
		num ++;
		if(a[i] == 0 && b[i] == 0)
			break;
	}
	for(i = 0; i < n; i ++)
	{
		q = b;
		for(p = a; p <= a + num - 1; p ++)
		{
			if(*p == i)
				break;
			else
			{
				if(*q == i)
					sum = sum + *p;
				q ++;
			}
		}
		if(sum == n * (n - 1) / 2 - i)
		{
			flag = 1;
			cout << i;
			break;
		}
		sum = 0;
	}
	if(flag == 0)
		cout << "NOT FOUND" << endl;
	return 0;
}