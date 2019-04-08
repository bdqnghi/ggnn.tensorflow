int main()
{
	int i,j=0,len,num1,num2;
	int a[110]={0},b[110]={0};
	char ch[110]={0};
	cin.getline(ch,110);
	len=strlen(ch);
	for(i=0;i<len/2*2-1;i+=2)
	{
		a[j]=10*(ch[i]-'0')+ch[i+1]-'0';
		j++;
	}
	if(len%2)
	{
		a[j]=ch[len-1]-'0';
		j++;
	}
	num1=j;
	for(i=0;i<num1;i++)
	{
		b[i+1]+=(b[i]+a[i])%13*100;
		b[i]=(b[i]+a[i])/13;
	}
	if(b[0])
		cout<<b[0];
	else if(num1==1)
		cout<<b[0];
	for(i=1;i<num1-1;i++)
	{
		if(b[i]<10)
			cout<<0;
		cout<<b[i];
	}
	if(len>2)
	{
		if(len%2)
			cout<<b[num1-1];
		else
		{
			if(b[i]<10)
				cout<<0;
			cout<<b[i];
		}
	}
	cout<<endl;
	b[num1]=b[num1]/100;
	cout<<b[num1]<<endl;
	return 0;
}