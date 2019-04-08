/*
 * ???: 1000010191_30_6.cpp
 * ??: ???
 * ????: 2010-11-5
 * ??: ????
 */


int main()
{
	int a,b;
	char n[100];
	cin>>a>>n>>b;
	//?????
	int t=0;
	for (int i=0;n[i];i++)
	{
		if (n[i]>='0'&&n[i]<='9')
			t=t*a+n[i]-'0';
		if (n[i]>='a'&&n[i]<='z')
			t=t*a+n[i]-'a'+10;
		if (n[i]>='A'&&n[i]<='Z')
			t=t*a+n[i]-'A'+10;
	}
	//??b??
	int len=0;
	char r[100];
	while (t!=0)
	{
		int temp=t%b;
		if (temp<10)
			r[len]='0'+temp;
		else
			r[len]='A'+temp-10;
		len++;
		t=t/b;
	}
	for (int i=len-1;i>=0;i--)
		cout<<r[i];
	if (len==0) cout<<0<<endl; //??0???
	cout<<endl;
	return 0;
}
