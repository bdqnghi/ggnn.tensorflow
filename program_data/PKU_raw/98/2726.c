int change1(int n)
{
	return n%10;
}
int change2(int n)
{
	return n%100/10;
}
int change3(int n)
{
	return n /100;
}








int main ()
{
	
    int n;
	cin>>n;
	char a[20];
	int len,relen=0;
	cin>>a;
	relen+=strlen(a);
	cout<<a;
	for (int i=0;i<n-1;i++)
	{
		cin>>a;
		len=strlen(a);
		if(relen+1+len<=80)
		{
			relen+=1+len;
			cout<<' '<<a;
		}
		else
		{
			cout<<endl;
			relen=strlen(a);
			cout<<a;
		}
	}
		
















	return 0;
}