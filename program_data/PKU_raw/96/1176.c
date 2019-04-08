/*??(12-11) ??13*/ 



int main()
{
	char a[101];
	cin>>a;
	int len;
	len=strlen(a);
	int b[101],i,c[101];
	for(i=1;i<=len;i++) b[i]=a[i-1]-'0';
	int hand=0;
	i=2;
	int num=b[1];
	while(i<=len)//???? 
	{
		num=num*10+b[i];
		hand++;
		c[hand]=num/13;
		num=num%13;
		i++;
	}
	i=1;
	if(hand==0) cout<<"0"<<endl;
	else
	{
		while(c[i]==0 && i<hand) i++;
		for(;i<=hand;i++) cout<<c[i];
		cout<<endl;
	}
	cout<<num<<endl;
	return 0;
}