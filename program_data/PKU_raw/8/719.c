int m,n,a[20],b[20];
void duqu()
{
	int i;
	cin>>m>>n;
	for(i=1;i<=m;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		cin>>b[i];
}//????
void paixu()
{
	int i,j,t;
    for(i=1;i<=m-1;i++)
		for(j=1;j<=m-i;j++)
			if(a[j]>a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
	for(i=1;i<=n-1;i++)
		for(j=1;j<=n-i;j++)
			if(b[j]>b[j+1])
			{t=b[j];b[j]=b[j+1];b[j+1]=t;}
}//?????
void shuchu()
{
	int i,j;
	cout<<a[1];
	for(i=2;i<=m;i++)
		cout<<" "<<a[i];
	for(j=1;j<=n;j++)
		cout<<" "<<b[j];
	cout<<endl;
}//??
int main()
{
	duqu();
	paixu();
	shuchu();//????
	return 0;
}