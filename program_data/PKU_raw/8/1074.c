void putin(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	cin>>*(p+i);
}
void putout(int *p,int n)
{
	int m,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		if(*(p+j)>*(p+j+1)) {m=*(p+j);*(p+j)=*(p+j+1);*(p+j+1)=m;}
	}
	cout<<*(p+1); for(i=2;i<n+1;i++) cout<<" "<<*(p+i);
}
int main()
{
	int n1,n2,a[10000],b[10000],*pa,*pb;
	pa=a;pb=b;
	cin>>n1>>n2;
	putin(pa,n1);
	putin(pb,n2);
	putout(pa,n1);cout<<" ";
	putout(pb,n2);
	return 0;
}
	