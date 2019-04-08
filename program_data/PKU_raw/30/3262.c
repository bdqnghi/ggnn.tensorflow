int main()
{
	int n=0,i=0,a=0,b=0,sum=0;//a?????,b?????
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a=i%10;
		b=i/10;
		if(i%7!=0 && a!=7 && b!=7)
			sum=sum+i*i;
	}
	cout<<sum<<endl;
	return 0;
}
