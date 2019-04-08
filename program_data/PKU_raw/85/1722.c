int main()
{
	int n,i,j,l;char a[20][20];
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if((a[i][0]>=65&&a[i][0]<=90)||(a[i][0]>=96&&a[i][0]<=122)||(a[i][0]=='_'))
		{
			int num=1;
			for(j=1;j<20;j++)
			{
				if(!((a[i][j]>=65&&a[i][j]<=90)||(a[i][j]>=97&&a[i][j]<=122)||(a[i][j]=='_')||(a[i][j]>='0'&&a[i][j]<='9')))break;
				num++;
			}
			if(num==l)
				cout << "yes"  << endl;
			else
				cout << "no" << endl;
		}
		else cout << "no" << endl;
	}
	return 0;
}