int main()
{
int n,a,r=1,b,c,d,z,temp;
cin>>n;
for(r=1;r<=n;r++)
{
	cin>>a;
	b=c=1;
	for(temp=1;temp<=a;temp++)
	{
	z=b;
	d=b+c;
	b=c;
	c=d;
	}
	cout<<z<<endl;
}

return 0;
}

