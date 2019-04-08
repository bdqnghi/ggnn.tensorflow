int main()
{
	char bei0[105];
	int bei[105]={0},shang[105]={0};
	int beichu,yushu;
	int yu[4];
	int i,j;
	cin.getline(bei0,102,'\n');
	int n;
	n=strlen(bei0);		//?????????
	for(i=0;i<=n-1;i++)
		bei[i+1]=bei0[i]-'0';	//??char???????????int?,?bei[1]???
	
	if(n==1)
		cout<<"0"<<endl<<bei[1]<<endl;

	else if(n==2&&(bei[1]*10+bei[2]<13))
		{cout<<"0"<<endl;
		 cout<<bei[1]*10+bei[2]<<endl;}
	
	else
	{
	yu[1]=bei[0];
	yu[2]=bei[1];
	yu[3]=bei[2];
	
	for(i=3;i<=n;i++)
	{
		beichu=yu[1]*100+yu[2]*10+yu[3];
		shang[i-2]=beichu/13;
		yushu=beichu%13;
		if(yushu<10)
			{yu[1]=0;yu[2]=yushu;}
		else 
			{yu[1]=1;yu[2]=yushu%10;}
		yu[3]=bei[i];
	}
	beichu=beichu=yu[1]*100+yu[2]*10+yu[3];
	shang[n-1]=beichu/13;
	yushu=beichu%13;
	if(shang[1]==0)
	{
		for(i=2;i<=n-1;i++)
			cout<<shang[i];
	}
	else
	{
		for(i=1;i<=n-1;i++)
		cout<<shang[i];
	}
	cout<<endl;
	cout<<yushu<<endl;
	}
	return 0;
}