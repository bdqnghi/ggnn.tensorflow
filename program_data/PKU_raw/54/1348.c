int i=1;int n,k;
int f(int x)
{
	if (x==1) return (i*n+k);
	else if (f(x-1)%(n-1)==0)return (f(x-1)*n/(n-1)+k);
	else
		{while(f(x-1)%(n-1)!=0)
		i++;
		return (f(x-1)*n/(n-1)+k);
		}
}
int main()
{

	cin>>n>>k;
	cout<<f(n);

}
