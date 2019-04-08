int a[1000],n,f[999][999];
int max(int a,int b) {if(a>b) return a;else return b;}
int daodan(int s,int h)
{
	if(s==n) return 0; 
	if(h>=a[s]) return max(daodan(s+1,a[s])+1,daodan(s+1,h));
	else return daodan(s+1,h);
}
	
int main()
{
	int i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<daodan(0,31999);
	return 0;
}