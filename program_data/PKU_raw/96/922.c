int main()
{
	int a[105],b[100],i=0,e=0;
	char d;
	char x[105]={'\0'};
	while (cin>>x)
	{
	   int j4=0;
	while (x[j4]!='\0')
	{
		int c;
		c=x[j4]-'0';
		a[i++]=c;
		j4++;
	}
	d=0,j4=0;
	for (int j=0;j<=i-1;j++)
	{
		e=e*10+a[j];
		b[j]=e/13;
		e=e%13;
	}
	int flag=0;
	for (int i2=0;i2<=i-1;i2++)
	{
		if (b[i2]!=0)
			flag=1;
		if (flag==1)
		    cout<<b[i2];
	}
	if (flag==0)
		cout<<0;
	cout<<endl;
	cout<<e<<endl;
	e=0;
	i=0;
	flag=0;
	for (int j3=0;j3<=99;j3++)
	{
		a[j3]=0;
		b[j3]=0;
	}
	}
}