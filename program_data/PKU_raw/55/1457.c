int main()
{
	char a[90000],b[90000];
	long int n,i,j,m,x,y,s;
	cin>>x;
	cin>>a;
	cin>>y;
	n=0;m=0;
	j=strlen(a);
	for(i=0;i<j;i++)
	{
		if(a[i]>='0' && a[i]<='9') m=a[i]-'0';
		if(a[i]>='A' && a[i]<='Z') m=a[i]-'A'+10;
		if(a[i]>='a' && a[i]<='z') m=a[i]-'a'+10;
		n=n*x+m;
	}
	j=0;
	s=0;
	if (n==0) cout<<0;
	while(n>0)
	{
		j=n%y;
		if(j>=10) b[s]=j-10+'A';
		else b[s]=j+'0';
		s++;
		n=n/y;
	}
    for(i=s-1;i>=0;i--)
    cout<<b[i];
	return 0;
}
