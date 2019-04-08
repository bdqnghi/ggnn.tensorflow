int main(){
	int a[100][100],b[100][100],c[100][100];
	int m,n,q,i,j;
	cin>>m>>q;
	for (i=0;i<m;i++)
		for (j=0;j<q;j++)
			cin>>a[i][j];
	cin>>q>>n;
	for (i=0;i<q;i++)
		for (j=0;j<n;j++)
			cin>>b[i][j];
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			for (int t=0;t<q;t++)
			{
				c[i][j]=c[i][j]+a[i][t]*b[t][j];
			}
	for (i=0;i<m;i++){
		cout<<c[i][0];
		for (j=1;j<n;j++)
			cout<<" "<<c[i][j];
		    cout<<endl;}
	return 0;
}
