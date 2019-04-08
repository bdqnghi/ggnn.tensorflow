int main()
{
	char ch[103][103]={'\0'};				//#???????.?????@??????????
	int a[103][103]={0};					//0???????1?????2??????????3????????
	int n,i,j,k,day,num=0;
	cin>>n;
	cin.get();
	for (i=0;i<n+2;i++)
		for (j=0;j<n+2;j++)
			ch[i][j]='#';					//????????1?n???
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
			cin>>ch[i][j];
		cin.get();
	}
	cin>>day;
	for (i=0;i<n+2;i++)
		for (j=0;j<n+2;j++)
		{
			if (ch[i][j]=='#')
				a[i][j]=0;
			else if (ch[i][j]=='.')
				a[i][j]=1;
			else if (ch[i][j]=='@')
				a[i][j]=2;
		}									//?????????????
		for (k=1;k<day;k++)					//day????day-1?
		{
			for (i=1;i<=n;i++)
				for (j=1;j<=n;j++)
					if (a[i][j]==2)
						a[i][j]++;			//????????????????????
			for (i=1;i<=n;i++)
				for (j=1;j<=n;j++)
				{
					if ((a[i][j]==3)&&(a[i][j-1]==1))	//????
						a[i][j-1]=2;
					if ((a[i][j]==3)&&(a[i][j+1]==1))	//????
						a[i][j+1]=2;
					if ((a[i][j]==3)&&(a[i-1][j]==1))	//????
						a[i-1][j]=2;
					if ((a[i][j]==3)&&(a[i+1][j]==1))	//????
						a[i+1][j]=2;
				}
		}
		for (i=1;i<=n;i++)
			for (j=1;j<=n;j++)
			{
				if ((a[i][j]!=0)&&(a[i][j]!=1))
					num++;
			}
		cout<<num<<endl;
		return 0;
}