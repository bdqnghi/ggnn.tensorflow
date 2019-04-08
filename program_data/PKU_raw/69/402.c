int max(int a,int b)
{
	if (a>b) return a;else return b;
}
int main()
{
	char a[250],b[250];
	int aa[252]={0},bb[252]={0},cc[252]={0};
	int i,k=0,n,m;
	cin>>a>>b;
	aa[0]=strlen(a);
	for (i=1;i<=aa[0];i++) aa[i]=a[aa[0]-i]-48;
	bb[0]=strlen(b);
	for (i=1;i<=bb[0];i++) bb[i]=b[bb[0]-i]-48;
	for (i=1;i<=max(aa[0],bb[0])+1;i++)
	{
		cc[i]=((aa[i]+bb[i])+k)%10;
		k=(aa[i]+bb[i]+k)/10;
	}
	for (i=251;i>=1;i--) if (cc[i]!=0) 
	{
		cc[0]=i;break;
	}
	if (i==0) cout<<0<<endl;
	else 
	{
		for (i=cc[0];i>0;i--) cout<<cc[i];
		cout<<endl;
	}
	return 0;
}