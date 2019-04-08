int main()
{
	int i=2,t,w=0;
	char str[101];
	char ans[100];
	str[0] = '0';
	cin>>(str+1);
	if(str[2]==0||((str[1]-'0')*10+str[2]-'0'<13&&str[3]==0))
	{
		cout<<"0"<<endl;
		cout<<(str+1)<<endl;
	}else{
	if((str[1]-'0')*10+str[2]-'0'<13)
		i = 3;
	while(str[i]!=0)
	{
		ans[w]='0';
		t = (str[i-2]-'0')*100+(str[i-1]-'0')*10+str[i]-'0';
		while(t>=13)
		{
			t -= 13;
			str[i-2] = t/100 + '0';
			str[i-1] = t/10 + '0';
			str[i] = t%10 + '0';
			ans[w]++;
		}
		w++;
		i++;
	}
	ans[w]=0;
	cout<<ans<<endl;
	if(str[i-2]!='0')
		cout<<str[i-2];
	cout<<str[i-1]<<endl;
	}
	return 0;
}