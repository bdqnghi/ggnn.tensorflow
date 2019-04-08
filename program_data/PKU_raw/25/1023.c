char number[100];
int main()
{
	number[0]='0';
	int n;
	cin>>n;
	void power(int);
	if(n==0)
		cout<<"1"<<endl;
	else
	{
	power(n-1);
	int i;
	for(i=1;i<=strlen(number)-1;i++)
		cout<<number[i];
	}
	return 0;
}

void power(int n)
{
	if(n==0)
		number[1]='1';
	else
		power(n-1);
	int len=strlen(number);
	int a[100];
	a[len-1]=0;
	int i;
	for(i=len-1;i>=1;i--)
	{
		if(2*(number[i]-'0')+a[i]<=9)
			number[i]=2*(number[i]-'0')+a[i]+'0',a[i-1]=0;
		else
			number[i]=2*(number[i]-'0')+a[i]-10+'0',a[i-1]=1;
	}
	if(a[0]==1)
		number[0]='1';
	else
		number[0]='0';
	if(number[0]!='0')
	{
		for(i=len;i>=1;i--)
			number[i]=number[i-1];
		number[0]='0';
	}
}



