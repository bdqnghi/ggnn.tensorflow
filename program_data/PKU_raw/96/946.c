int main()
{
	char a[100];
	int	b[100],c[100];
	int i,k,m;
	double n;
	gets(a);
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		b[i]=a[i]-48;
	}
	if(k>1)
	{
		for(i=0;i<k-1;i++)
		{
			m=10*b[i]+b[i+1];
			n=m/13;
			c[i]=floor(n);
			b[i+1]=m%13;
		}
		if(c[0]!=0||k<=2)
		{
			cout<<c[0];
		}
		for(i=1;i<k-1;i++)
		{
			cout<<c[i];
		}
		cout<<endl;
		cout<<b[k-1];
	}
	else
	{
		cout<<"0"<<endl<<b[0]<<endl;
	} 
	return 0;
}