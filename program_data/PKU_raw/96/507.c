int main()
{
	char a[101];
	int b[101],c=0,i,t=0,len,result[101];
	cin>>a;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		b[i]=a[i]-'0';//?????
	}
	for(i=0;i<len;i++)
	{
		c=c*10+b[i];
		if(c>=13)
		{	result[t]=c/13;//???
		    t++;
		    c=c%13;
		}
		else
		{
			result[t]=0;
			t++;
		}
	}
	i=0;
	while(result[i]==0)
	{i++;}
	if(i>=len)//???????
		cout<<"0";
	else
	{
	for(;i<t;i++)
		cout<<result[i];//??
	}
	cout<<endl;
	cout<<c<<endl;
	return 0;
}


