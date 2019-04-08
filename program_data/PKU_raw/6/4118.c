int main( )
{    int i,j,p,q,m,n,k,a[200][200],sum;
    cin>>k;
	for(i=1;i<=k;i++)
	{  sum=0;
		cin>>m>>n;
		for (p=0;p<m;p++)
			{for (q=0;q<n;q++)
			{cin>>a[p][q];}} //??
		int *pointer;
		pointer=*a;
		for(p=0;p<n;p++)
		{sum=sum+*(pointer+p);}
		for(p=1;p<m-1;p++)
		{sum=sum+*(*(a+p)+0)+*(*(a+p)+n-1);}
		for(p=0;p<n;p++)
		{sum=sum+*(*(a+m-1)+p);}           //????????????
		
		cout<<sum<<endl;  //??
	}
		


	return 0;}
