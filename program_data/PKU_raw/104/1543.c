int main()
{
	int a[15],b[15],i,j,t;
	cin>>a[0]>>b[0];
	
	//????a???
	for(i=0;a[i]>0;i++)
		a[i+1]=a[i]/2;
	for(j=0;j<=i/2-1;j++)       //"<="!!!!!!!!
	{
		t=a[j];a[j]=a[i-1-j];a[i-1-j]=t;
	}
	a[i]=-1;

	
	//????b???
	for(i=0;b[i]>0;i++)
		b[i+1]=b[i]/2;
	for(j=0;j<=i/2-1;j++)
	{
		t=b[j];b[j]=b[i-1-j];b[i-1-j]=t;
	}
	b[i]=-1;

	for(i=0;a[i]==b[i] && a[i]!=-1;i++);
	cout<<a[i-1];
	return 0;
}
