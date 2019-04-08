long f(long a,char str[20],int l);
long F(long n,long b);
int main()
{
	long a,b,n;int i,l;char str[20];
	cin >> a >> str >> b;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]>96&&str[i]<123)
			str[i]=str[i]-32;
	}
	n=f(a,str,l);
	F(n,b);
	return 0;
}
long f(long a,char str[20] ,int l)
{
	long sum=0;int i,t,num=1;
	for(i=l-1;i>=0;i--)
	{
		if(str[i]>64&&str[i]<91)
		{
			t=str[i]-'A'+10;
		}
		else
			t=str[i]-'0';
		sum=sum+t*num;
		num=num*a;
	}
	return sum;
}
long F(long n,long b)
{
	int i=0,str[200];char a;
	if(n==0)
		cout << "0" << endl;
	while(n>0)
	{
		str[i]=n%b;
		n=n/b;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		if(str[i]>=0&&str[i]<=9)
			cout << str[i];
		else
		{
			a='A'+str[i]-10;
			cout << a;
		}
	}
	cout << endl;
	return 0;
}






