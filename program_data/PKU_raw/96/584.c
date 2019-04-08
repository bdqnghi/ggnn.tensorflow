int main()
{
	char a[110];
	int b[110];
	cin>>a;
	int len=strlen(a),i=0;
	for(i=0;i<len;i++)
		b[i]=a[i]-'0';
	if(len==1)
	{
		cout<<"0"<<endl<<b[0]<<endl;
		return 0;
	}
	int k=0;
	k=10*b[0]+b[1];
	b[1]=k%13;
	if(k>=13)
	{
		cout<<k/13;
	    
	}
	else if(len==2)
	{
		cout<<"0"<<endl<<k<<endl;
		return 0;
	}
	for(i=1;i<len-1;i++)
	{
		k=b[i]*10+b[i+1];
		cout<<k/13;
		b[i+1]=k%13;
	}
	cout<<endl<<b[i]<<endl;
	return 0;


}