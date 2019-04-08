int main()
{
	int t, i, j, k;
	char str[100000];
	cin>>t;
	cin.get();
	for (i = 0; i < t; i ++)
	{	
		
		cin.getline(str,100000);
		int p = strlen(str);
		int count[27] = {0}, flag = 0;
		for (j = 0; j < p; j ++)
		{
			count[str[j] - 96] ++;
		}
		for (k = 1; k <= 26; k ++)
		{
			if (count[k] == 1)
			{
				cout<<(char)(k + 96)<<endl;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			cout<<"no"<<endl;
	}
	return 0;
}