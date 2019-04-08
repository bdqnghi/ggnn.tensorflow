int main()
{
	char a[81],b[81];
	cin.getline(a,80,'\n');
	cin.getline(b,80,'\n');
	int i,n,m;
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<n&&i<m;i++)
	{
		if(a[i]<='z'&&a[i]>='a') a[i]=a[i]-('a'-'A');
		if(b[i]<='z'&&b[i]>='a') b[i]=b[i]-('a'-'A');
	}
	if(strcmp(a,b)>0) cout<<">"<<endl;
	if(strcmp(a,b)<0) cout<<"<"<<endl;
	if(strcmp(a,b)==0) cout<<"="<<endl;
	return 0;
}