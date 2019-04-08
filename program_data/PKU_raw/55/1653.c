int main()
{
	int a,b,l;                       //?????????????????
	long n=0;                    
	char c[100];
	cin>>a>>c>>b;                    //??
	l=strlen(c);
	for(int i=0;i<=l-1;i++)          //????
		if(c[i]<='z'&&c[i]>='a')
			c[i]=c[i]-'a'+'A';
	for(int i=0;i<l;i++)             //??????
	{
		int m;
		if(c[i]<='Z'&&c[i]>='A')
			m=10+c[i]-'A';
		else m=c[i]-'0';
		n+=m*pow((double)a,l-i-1);
	}
	for(int i=0;;i++)                //???????
	{
		int m;
		m=n%b;
		n=(n-m)/b;
		if(m<10)
			c[i]=m+'0';
		else c[i]=m-10+'A';
		if(n==0)
		{
			l=i+1;
			break;
		}
	}
	for(int i=l-1;i>=0;i--)         //??
		cout<<c[i];
	return 0;
}