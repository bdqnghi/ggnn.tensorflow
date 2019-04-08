int a[100][2];
int n[2],i,j,k,t;
int order(int j)
{
	for(i=1;i<n[j];i++)
		for(k=i+1;k<=n[j];k++)
		{
			if(a[i][j]>a[k][j])
			{
				a[i][j]=a[i][j]^a[k][j];
				a[k][j]=a[i][j]^a[k][j];
				a[i][j]=a[i][j]^a[k][j];
			}
		}
}
int main()
{
	cin>>n[0]>>n[1];
	for(i=1;i<=n[0];i++) cin>>a[i][0];
	for(i=1;i<=n[1];i++) cin>>a[i][1];
	order(0);
	order(1);
	for(i=1;i<=n[0];i++) cout<<a[i][0]<<' ';
	for(i=1;i<n[1];i++) cout<<a[i][1]<<' ';
	cout<<a[n[1]][1]<<endl;

return 0;
}