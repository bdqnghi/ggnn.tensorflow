int main()
{
	int n,i,j,flag = 1,flag2 = 0,len,count = 0;
	cin >> n;
	int a[100000],b[100000];
	for (i = 0;i < 100000;i++)
	{
		cin >> *(a + i) >> *(b + i);
		if (*(a + i) == 0 && *(b + i) == 0)
		{
			len = i;
			break;
		}
	}
	for (i = 0;i < n;i++)
	{
		count = 0;
		flag = 1;
		for (j = 0;j < len;j++)
		{
			if (*(b + j) == i)
				count++;
		}
		if (count == n - 1)
		{
			for(j = 0;j < len;j++)
				if (*(a + j) == i)
					flag = 0;
			if (flag == 1)
			{
				cout << i << endl;
				flag2 = 1;
			}
		}
	}
	if (flag2 == 0)
		cout << "NOT FOUND" << endl;
	return 0;
}