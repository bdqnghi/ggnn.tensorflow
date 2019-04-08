int main()
{
	int n,i,j;
	cin >> n;
	cin.get();
	char a[100][81];
	int flag[100]={0};
	for (i=0;i<n;i++)
	{
		cin.getline(a[i],100);
		int num=0;
		if (((a[i][0]<='z')&&(a[i][0]>='a'))||((a[i][0]<='Z')&&(a[i][0]>='A'))||(a[i][0]=='_'))
		{
			for (j=0;a[i][j]!='\0';j++)
				if (((a[i][j]<='z')&&(a[i][j]>='a'))||((a[i][j]<='Z')&&(a[i][j]>='A'))||((a[i][j]>='0')&&(a[i][j]<='9'))||(a[i][j]=='_'))
					num++;
			if (num==j)
				cout << "1" << endl;
			else cout << "0" << endl;
		}
		else cout << "0" << endl;
	}
	return 0;
}
