int main()
{
    int i,k,m,n,t,a[101];
    cin>>n>>m;
    for(i=0;i<n;i++)
    	cin>>*(a+i);
    for(k=1;k<=m;k++)
    {
    	t=*(a+n-1);
    	for(i=n-1;i>0;i--)
    		*(a+i)=*(a+i-1);
    	*a=t;
    }
    for(i=0;i<n-1;i++)
    	cout<<*(a+i)<<' ';
    cout<<*(a+i);
	return 0;
}
