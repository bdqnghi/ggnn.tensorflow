
int main()
{
	int a[100][100],y,x,i,j,k;
	cin>>y>>x;
	for(i=0;i<y;i++)
		for(j=0;j<x;j++)
			cin>>a[i][j];
	for(k=0;k<x;k++)
		for(i=0;i<y&&k-i>=0;i++)
			cout<<a[i][k-i]<<endl;
	for(k=x;k<x+y-1;k++)
		for(j=x-1;k-j<y&&j>=0;j--)
			cout<<a[k-j][j]<<endl;
	return 0;
}
