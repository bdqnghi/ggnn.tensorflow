int main()
{
	double q=0;
	int n=0;
	cin>>q;
	cin.get();
	char a[201],b[201];
	int c[201];
	double i=0;
	int	j=0,e=0,f=0,number=0,l=0;
	cin>>a;
	cin>>n;
	e=strlen(a);
	for(i=0;i<=e-1;i++)
	{
		l=0;
		if(a[(int)i]>='0'&&a[(int)i]<='9')
			l=a[(int)i]-'0';
		else if(a[(int)i]>='A'&&a[(int)i]<='Z')
			l=a[(int)i]-'A'+10;
		else if(a[(int)i]>='a'&&a[(int)i]<='z')
			l=a[(int)i]-'a'+10;
		number=l*pow(q,e-1-i)+number;
	}
	for(i=0;i<=200;i++)
	{
		c[(int)i]=number % n;
		if(c[(int)i]>=0 && c[(int)i]<=9)
			b[(int)i]=c[(int)i]+'0';
		else 
			b[(int)i]=c[(int)i]+'A'-10;
		number=number/n;
		if(number==0)
			break;
	}
    f=i;
	for(i=f;i>=0;i--)
		cout<<b[(int)i];
	    cout<<endl;
	return 0;
}