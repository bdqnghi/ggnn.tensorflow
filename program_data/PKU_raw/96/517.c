int main()
{
	int res[102]={0},chan[102],len,i,j,n,k;
	char c[102];
	cin.getline(c,101);
	len=strlen(c);
	for(i=0;i<len;i++)
	{
		chan[i]=c[i]-'0';
	}
	for(i=1;i<len;i++)
	{
		chan[i]+=10*chan[i-1];
		if(chan[i]>=13)
		{
			res[i]=chan[i]/13;
			chan[i]=chan[i]%13;
		}
	}
	i=0;
	while(res[i]==0) i++;
		if(len-i>=1)
	{
			for(;i<len;i++)
	{
		cout<<res[i];
	}
	}
	else cout<<'0';
	cout<<endl<<chan[len-1];
	return 0;
}