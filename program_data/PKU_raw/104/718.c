
int main()
{
	int a[1000],b[1000],x,y,i,j;
	cin>>x>>y;
	a[0]=x;
	b[0]=y;
	for(i=0;a[i]!=1;i++)
	{
		if(a[i]%2==0)
			a[i+1]=a[i]/2;
		else a[i+1]=(a[i]-1)/2;
	}
	for(i=0;b[i]!=1;i++)
	{
		if(b[i]%2==0)
			b[i+1]=b[i]/2;
		else b[i+1]=(b[i]-1)/2;
	}
	for(i=0;a[i]!=1;i++)
		for(j=0;b[j]!=1;j++)
			if(a[i]==b[j])
				goto lable;
lable:cout<<a[i]<<endl;
	return 0;
}