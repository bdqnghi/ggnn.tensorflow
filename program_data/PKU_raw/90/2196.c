int K(int,int,int);
int main()
{
	int t,N,M,i,s;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>M>>N;
		if(N>M) N=M;
		s=K(M,N,0);
		cout<<s<<endl;
	}
	return 0;
}
int K(int a,int b,int f)
{
	int k=0,j;
	if(b==1) return a>=f;
	for(j=f;j<a;j++) k+=K(a-j,b-1,j);
	return(k);
}