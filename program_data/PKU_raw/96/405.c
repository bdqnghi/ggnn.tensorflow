//**************************************
//*????????                     
//*????? 1100012780     	        
//*???2011.11.03                     
//**************************************
int main()
{
	char num[101] = {0};
	int result[101] = {0};
	int i;
	int n = 0;
	int r = 0;
	cin>>num;
	for (i = 0;i <= 99;i++)
	{
		if (num[i] != 0)
			n++;
		else
			break;
	}
	r = num[0] - '0';
	for (i = 1;i <= n - 1;i++)
	{
		result[i] = (r * 10 + num[i] - '0') / 13;
		r = (r * 10 + num[i] - '0') % 13;
	}
	if (n >= 2)
	{
		if (result[1] == 0)
		{
			if (n == 2)
				cout<<0;
			else
			{
				for (i = 2;i <= n - 1;i++)
					cout<<result[i];
			}
		}
		else 
			for (i = 1;i <= n - 1;i++)
				cout<<result[i];
		cout<<endl;
	 	cout<<r;
	}
	if (n == 1)
	{
		cout<<0<<endl;
		cout<<r;
	}
	return 0;
}
