//********************************
//*???? ????????????
//********************************


int main()
{
	char a[100100];
	int i,j,k,t,n,c;
	int num[26];
	int No[26];
	cin >> t;
	cin.get();
	for (i = 1; i <= t; i++)
	{
		memset(num,0,26*4);
		k = 0;
		cin.getline(a,100100);
		n = strlen(a);
		for(j = 0; j < n; j++)
		{
			c = (int)a[j] - 'a';
			if (!num[c])
			{
				No[k] = c;
				k++;
			}
			num[c]++;
		}
		for(j = 0; j < k; j++)
		{
			if(num[No[j]] == 1)
			{
				cout << (char)(No[j] + 'a') << endl;
				break;
			}
		}
		if(j == k)
			cout << "no" << endl;
	}
	cin.get();
    cin.get(); //????
	return 0;
}
