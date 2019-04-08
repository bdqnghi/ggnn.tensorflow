int c,d;
void cal(int b[105],int i,int k,int n)
{
	if(i<n)
	{
	c=(k*10+b[i])/13;
	k=(k*10+b[i])%13;
	if(i!=1)
	cout<<c;
	else
	{
		if(c>0)
			cout<<c;
	}
	cal(b,i+1,k,n);
	}
	if(i==n-1)
		cout<<endl<<k;
}
int main()
{
	char a[105];
	cin>>a;
	int i,j,k,m,n;
	n=strlen(a);
	int b[105];
	for(i=0;i<n;i++)
	{
		b[i]=a[i]-'0';
	}
	if(n==1)
		cout<<"0"<<endl<<b[0];
	else
	{
		if(n==2&&b[0]==1&&b[1]<3)
			cout<<"0"<<endl<<10+b[1];
		else
	       cal(b,1,b[0],n);
	}
	
	return 0;
}
