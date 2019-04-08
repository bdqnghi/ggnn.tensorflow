int put(int m,int n)
{
	if(m==1||n==1||m==0)
		return 1;
	if(m<0||n==0)
		return 0;
		return 	put(m,n-1)+put(m-n,n);
	
}
int main()
{
	int t,M,N,i,sum;
	cin>>t;
	for(i=1;i<=t;i++)
		{
cin>>M>>N;
	    	cout<<put(M,N);
cout<<endl;
}
	return 0;
}
