int main()
{
	int i,j,n,m,a[102],*p=NULL;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
	{
		p=&a[n-1];				//??????????
		for(j=0;j<n;j++)		//???????
		{
			*(p+1)=*p;			//????
			p-=1;
		}
		a[0]=a[n];				//?????a[0]
		a[n]='\0';				//???
	}
	for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-1];
	return 0;
}