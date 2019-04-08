int main() {
	int x,y;
	cin>>x>>y;
	int i,j;
	int p,q;
	int k=0;
	p=0;q=0;
	int c=1;
	int d=1;
	int a[11],b[11],f[11];
    for (i=1;i<=10;i++)
		{c=c*2;
	    if (c>x)
	    	{p=i;break;}}
	for (i=1;i<=10;i++)
	{
		d=d*2;
		if (d>y)
			{q=i;break;}
	}
	for (i=0;i<=p;i++)
	{
		a[i]=x;
		x=x/2;
	}
	for (i=0;i<=q;i++)
	{
		b[i]=y;
		y=y/2;
	}
	for (i=0;i<=p;i++)
		for (j=0;j<=q;j++)

			if (a[i]==b[j]&&a[i]!=0)
				{ f[k]=a[i];k++;}
cout<<f[0]<<endl;


	return 0;
}
