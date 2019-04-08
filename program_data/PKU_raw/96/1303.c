int main()
{
	char m[104];
	scanf("%s",m);
	int len=strlen(m);
	char m2[103];
	int f=0,F=0;
	if(len==2)
	{
		if(m[0]-'0'==1&&m[1]-'0'<=2)
		{
			cout<<0<<endl;
			cout<<10+m[1]-'0'<<endl;
		}
	}
	if(len==1)
	{
		cout<<0<<endl;
		cout<<m[0]-'0'<<endl;
		return 0;
	}
	for(int i=0;i<len;i++)
	{
		int a;
		a=f*10+m[i]-'0';
		f=a%13;
		if(a/13==0&&F==0)
		{}
		else if(i==len-1)
		{
			F++;
			cout<<a/13;
			cout<<endl;
			cout<<a%13;
		}
		else
		{
			F++;
			cout<<a/13;
		}
		
	}
	return 0;
}