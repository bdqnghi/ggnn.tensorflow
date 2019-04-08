int main()
{
	char a[200];
	int i , len , flag;
	cin.getline(a , 200);
	len = strlen(a);
	if (a[0] >= '0' && a[0] <= '9')
	{
		cout << a[0];
		flag = 1;
	}
	for (i = 1 ; i <= len - 1 ; i++)
	{
		if (flag == 1)
		{
			if (a[i] >= '0' && a[i] <= '9')
			{
				cout << a[i];
			}
			else
			{
				cout << endl;
				flag = 0;
			}
		}
		else
		{
			if (a[i] >= '0' && a[i] <= '9')
			{
				flag = 1;
				cout << a[i];
			}
		}
	}
	return 0;
}

		
