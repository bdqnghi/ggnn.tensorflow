int main()
{
	char a[100],b[100],c[100];
	int n,j,i,k,l,max,min;
	cin>>n;
	cin>>a;
	strcpy(b,a);
	strcpy(c,a);
	max=min=strlen(a);
	for(i=2;i<=n;i++)
	{
		cin>>a;
		k=strlen(a);
		if(k>max)
		{
			max=k;
			strcpy(b,a);
		}
		else if(k<min)
		{
			min=k;
			strcpy(c,a);
		}
	}
	cout<<b<<endl;
	cout<<c<<endl;
	return 0;
}
