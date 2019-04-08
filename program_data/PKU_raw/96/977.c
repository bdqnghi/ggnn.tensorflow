int main()
{
	char ch[110];
	cin>>ch;
	int shu[110];
	for (int i=0;i<strlen(ch);i++)
		shu[i]=ch[i]-'0';
	if (strlen(ch)<=2 && shu[0]*10+shu[1]<13) 
	{
		cout<<0<<endl;
		if (strlen(ch)==2) cout<<shu[0]<<shu[1]<<endl;
		else cout<<shu[0];
	}
	else 
	{
		int count=2;
		int yushu=(shu[0]*10+shu[1])%13;
		int shang=(shu[0]*10+shu[1])/13;
		if (shang!=0) cout<<shang;
		while (count<strlen(ch))
		{
			cout<<(yushu*10+shu[count])/13;
			yushu=(yushu*10+shu[count])%13;
			count++;
		}
		cout<<endl;
		cout<<yushu;
	}
	return 0;
}