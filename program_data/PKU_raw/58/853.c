//?????C????????
int main()
{
	char a[101][100];
	int l[101];
	int n;//n????
	cin>>n;
	cin.getline(a[0],100);
	for(int i=1;i<=n;i++)
		{
		cin.getline(a[i],100);
		l[i]=strlen(a[i]);
		}
	for(int i=1;i<=n;i++)
	{
		if((a[i][0]=='_')||((a[i][0]>='a')&&(a[i][0]<='z'))||((a[i][0]>='A')&&(a[i][0]<='Z')))
			for(int j=0;j<l[i];j++)
			{
				if((a[i][j]=='_')||((a[i][j]>='a')&&(a[i][j]<='z'))||((a[i][j]>='A')&&(a[i][j]<='Z'))||((a[i][j]>='0')&&(a[i][j]<='9')))
					{
					if(j==l[i]-1)
						cout<<1<<endl;
					continue;
					}
				else {
					cout<<0<<endl;
					break;
				}

			}
		else cout<<0<<endl;
	}

	return 0;
}
