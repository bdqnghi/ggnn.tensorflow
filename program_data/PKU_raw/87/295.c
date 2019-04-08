int main()
{
	int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],s[1000];
    int i;
	for(i=0;;i++)
	{
		cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i]>>f[i];
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0) break;
	}
    for(i=0;;i++)
	{
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0) break;
		else s[i]=3600*(d[i]+12-a[i])+60*(e[i]-b[i])+f[i]-c[i];
	}
	for(i=0;;i++)
	{
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0) break;
		else cout<<s[i]<<endl;
	}
	return 0;
}
