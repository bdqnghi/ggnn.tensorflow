//************************************
//*??  ????????????*****
//*????? 1300012753         ***** 
//*???2013.11.05          ********* 
//************************************
int main()
{
	int t;
	cin >> t;
	char a[100000];
	char ch;
	ch = cin.get();
	for(int i = 1; i <= t; i++)
	{
		int k = 1, j, m, num = 0;
		a[k] = cin.get();
		while(a[k] != '\n')
		{
			k++;
			a[k] = cin.get();
		} 
		k--;
		for(j = 1; j <= k; j++)
		{
			for(m = 1; m<= k; m++)
			{
				if(j == m)
				continue;
				if(a[j] == a[m])
				break;
			}
			if(m == k+1)
			{
				cout << a[j] << endl;
				num++;
			}
			if(num == 1)
			break;
		}
		if(num == 0)
		cout << "no" << endl; 
	}
	return 0;
}