int main()
{
	int n = 0, b = 0, j = 0, flag = 0;
	cin >> n;
	cin.get();
	char a[50];
	while(n > 0)
	{
		flag = 1;
		b = 0;
		memset(a,0,sizeof(a));
		cin.getline(a,50);
		b = strlen(a);
		if(a[0] >= '0' && a[0] <= '9')
		{
			flag = 0;
		}
		else
		{
			for(j = 0; j <= b - 1; j++)
			{
				if((a[j] < '0' || (a[j] > '9' && a[j] < 'A') || (a[j] > 'Z' && a[j] < 'a') || (a[j] > 'z')) && a[j] != '_')
				{
					flag = 0;
					break;
				}
			}
		}
		if(flag == 0)
		{
			cout << "no" <<endl;
		}
		if(flag == 1)
		{
			cout << "yes" <<endl;
		}
		n--;
	}
	return 0;
}