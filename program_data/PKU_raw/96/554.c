int main()
{
	char a[101];
	int i;
	int l;
	int num[101]={-1};//?????????
	int num1[101]={0};//????
	cin.getline(a,101);
	l=strlen(a);		//???????
	for(i=0;i<l;i++)
	{num[i]=(int)a[i]-'0';
	}
	if(l==1)			//????
		cout<<0<<endl<<num[0]<<endl;
	else if(l==2&&10*num[0]+num[1]<13)
		cout<<0<<endl<<10*num[0]+num[1]<<endl;
	else				//????
	{
	for(i=0;i<l-1;i++)
	{	
		num1[i]=(10*num[i]+num[i+1])/13;
		num[i+1]=(10*num[i]+num[i+1])%13;
	}
	if(num1[0]!=0)
		cout<<num1[0];
	for(i=1;i<l-1;i++)
	cout<<num1[i];
	cout<<endl;
	cout<<num[l-1]<<endl;}
	cin.get();
	return 0;
}
