
long decimal(char c[],long x)
{
	long d=0;
	for(int i=0;c[i]!='\0';i++)
	{
		if(c[i]>='0'&&c[i]<='9')
			d=d*x+c[i]-'0';
		if(c[i]>='A'&&c[i]<='Z')
			d=d*x+c[i]-'A'+10;
		if(c[i]>='a'&&c[i]<='z')
			d=d*x+c[i]-'a'+10;
	}
	return d;
}

int main()
{
	long a,b;
	int length;
	char n[65] = {0};
	cin>>a>>n>>b;
	long x = decimal(n,a);
	for(int i=0;x>=0;i++)
	{
		int remainder=x%b;
		n[i]=remainder<10?'0'+remainder:'A'+remainder-10;
		x=(x-remainder)/b;
		length=i;
		if(x==0)
			break;
	}
	for(int i=length;i>=0;i--)
		cout<<n[i];
	cout<<endl;
	return 0;
}