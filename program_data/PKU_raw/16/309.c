int main()
{
	char a[10001],b[10001],c[10001];
	int x,i;
	cin>>a;
	x=strlen(a);
    for(i=0;i<=x;i++)
		b[i]=a[x-i-1];
	
	cout<<b;
	return 0;
}