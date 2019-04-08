

int main()
{
	int n,i,a[1000],*p,min=31999;
	cin>>n;
	for(i=0;i<n;i++) cin>>a[i];
	p=a;
	int daodan(int i,int min,int *p,int n);
	cout<<daodan(0,min,p,n);
	return 0;
}
int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int daodan(int i,int min,int *p,int n)
{
	if(i==n) return 0;
	if(*(p+i)<=min) return max(daodan(i+1,*(p+i),p,n)+1,daodan(i+1,min,p,n));
	else return daodan(i+1,min,p,n);
}
