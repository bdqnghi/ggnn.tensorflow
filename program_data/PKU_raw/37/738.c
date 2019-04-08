int main()
{
	int t,i,j,jj,flag,k = 0;
	char a[100000];
	cin>>t;
	cin.get();
	for (i = 0;i < t;i++)
	{
		k = 0;
		cin.getline(a,100000);
		for (j = 0;j < strlen(a);j++)
		{
			flag = 1;
			for (jj = 0;jj < strlen(a);jj++)
			{
				if ((a[j] == a[jj])&&(j != jj))
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				cout<<a[j]<<endl;
				k = 1;
				break;
			}
		}
		if (k == 0)
			cout<<"no"<<endl;
		memset (a,0,sizeof(a));
	}
	return 0;
}
