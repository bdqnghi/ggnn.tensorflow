
int a=0;
int fang(int m,int n)
{
    if (n==1)
	   a=1;
    if (m==0);
       a=1;
	if ((m<n)&&(n>1))
	   a=fang(m,n-1);
	if ((m>=n)&&(n>1))
       a=fang(m,n-1)+fang(m-n,n);
	//cout<<a;
   return (a);
}
int main()
{
    int t,i;
	cin>>t;
	for (i=0;i<t;i++)
	{
       int m,n;
	   cin>>m>>n;
	   cout<<fang(m,n)<<endl;
	}
    return 0;
}