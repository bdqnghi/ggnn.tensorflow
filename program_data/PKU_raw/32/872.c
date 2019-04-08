int main()
{
	char a[200],b[200];
	int n;
	cin>>n;
	while(n>=1)
	{
	int c[200]={0},d[200]={0},e[200]={0},le1,le2,i,j,m;
	cin>>a;
	cin>>b;
	le1=strlen(a);
	le2=strlen(b);

	for(i=0,j=le1-1;i<=le1-1,j>=0;i++,j--)
		c[i]=a[j]-'0';
	for(i=0,j=le2-1;i<=le2-1,j>=0;i++,j--)
		d[i]=b[j]-'0';

	for(i=0;i<=199;i++)
		{
		if(c[i]>=d[i])
			e[i]=c[i]-d[i];
		if(c[i]<d[i])
			{
			e[i]=10+c[i]-d[i];
			c[i+1]=c[i+1]-1;
			}

		}

	for(i=199;i>=0;i--)
		if(e[i]!=0)
		{
			m=i;
			break;
		}
	for(i=m;i>=0;i--)
		cout<<e[i];
	cout<<endl;
	n--;
	}
	return 0;
}