
int main( )
{
	int a[101][101];
	int row,col;

	int i,j;

	cin>>row>>col;

	for (i=0;i<row;i++)
		for (j=0;j<col;j++)
			cin>>a[i][j];

	for (i=0;i<col;i++)
		for (j=i;j>=0 && i-j<row;j--)
			cout<<a[i-j][j]<<endl; //????i+0?j?????i-j?????j?i??????j--

	for (i=1;i<row;i++)
		for (j=col-1;(j>=0) && (i+col-1-j <row) ;j--)
			cout<<a[i+col-1-j][j]<<endl;//????i+col-1?j????,i+col-1-j?????j??col-1??????j--


	return 0;
}