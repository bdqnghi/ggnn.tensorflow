int main()
{
	char str[1001];
	int len,count=0;
	int i;
	char c;
	cin>>str;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]-=32;
	}
	c=str[0];
	for(i=0;i<len;i++)
	{
		if(str[i]==c)
		{
			count++;
		}
		else
		{
			cout<<"("<<str[i-1]<<","<<count<<")";
			c=str[i];
			count=1;
		}
	}
	i--;
	cout<<"("<<str[i]<<","<<count<<")";
	cout<<endl;
	
	return 0;
}