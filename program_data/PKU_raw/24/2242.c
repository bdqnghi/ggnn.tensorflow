int main()
{
	int max=-1,min=9999999;
	char a[1000],b[1000],c[1000];
	while(cin>>a)
	{
		int l=strlen(a);
		if(max<l){
			max=l;
			strcpy(b,a);
		}
		if(min>l){
			min=l;
			strcpy(c,a);
		}
	}
	cout<<b<<endl<<c<<endl;
	return 0;
}
