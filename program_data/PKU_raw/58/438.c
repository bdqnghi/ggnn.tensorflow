int main()
{
	int n,i,j;
	char a[200][81];
	cin>>n;
	for(i=0;i<=n;i++)
		cin.getline(a[i],81);
	for(i=1;i<=n;i++)
	{
		if(a[i][0]=='_'||((int)a[i][0]>=65&&(int)a[i][0]<=122))
		{j=1;
			while(a[i][j]!='\0')
			{
				if(((int)a[i][j]>=65&&(int)a[i][j]<=122)||((int)a[i][j]>=48&&(int)a[i][j]<=57)||a[i][j]=='_')
					j++;
				else {cout<<0<<endl;break;}
			}
			if(a[i][j]=='\0')
				cout<<1<<endl;
		}
		else cout<<0<<endl;
	}
	return 0;
}