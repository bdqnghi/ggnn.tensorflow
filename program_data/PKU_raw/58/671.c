int main()
{
	int n,len,i,j,flag;
	char a[81];
	cin>>n;
	for (i=1;i<=n;i++)
	{
		if (i==1)
		cin.get();
		cin.getline(a,81);
		for (len=0;a[len]!='\0';len++);
		if (a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
			flag=1;
		else flag=0;
		for (j=1;j<=len-1;j++)
		{
			if (!((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9')||a[j]=='_'))
				flag=0;
			if (a[j]==' ')
				flag=0;
		}
		cout<<flag<<endl;
	}
	return 0;
}
