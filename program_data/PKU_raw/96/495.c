char c[200];//??????
int n[200];//??????
int main()
{
	int number,len,i;
	while(cin>>c)
	{
		len=strlen(c);
		for(i=1;i<=len;i++) n[i]=c[i-1]-'0';
		if(len==1) {cout<<"0"<<endl<<n[1]<<endl;continue;}
		if(len==2) 
		{
			number=10*n[1]+n[2];
			cout<<number/13<<endl<<number%13<<endl;
			continue;
		}
		number=n[1]*10+n[2];
		i=2;
		if(number<13) number=10*number+n[++i];//???????????13
		cout<<number/13;
		while(i<len)
		{
			number=(number%13)*10+n[++i];
			cout<<number/13;
		}
		cout<<endl<<number%13<<endl;
	}
	return 0;
}