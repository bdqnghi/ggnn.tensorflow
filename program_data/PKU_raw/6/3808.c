int main()
{
	int k,n,m,i,j,l,*p,a[100][100],s;
	cin>>k;
	for(i=1;i<=k;i++)
	{
		cin>>m>>n;
		for(j=0;j<m;j++)
		{
			for(l=0;l<n;l++)
				cin>>a[j][l];
		}
		p=&a[0][0];
		s=0;
		for(j=0;j<n;j++)
		{	
			if(n==1) s+=*p;
			else s+=(*(p+j)+*(p+100*(m-1)+j));
		}
		for(j=1;j<m-1;j++)
			s+=(*(p+j*100)+*(p+j*100+n-1));
		cout<<s<<endl;
	}
	return 0;
}
		

	



