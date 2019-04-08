int main()
{
	int row,col;
	cin>>row>>col;
	int a[110][110];
	int i,j;
	for(i=0;i<row;i++)
			for(j=0;j<col;j++){
				cin>>*(*(a+i)+j);
			}
	for(i=0;i<col;i++)
		for(j=0;j<=i&&j<row;j++){
			cout<<*(*(a+j)+i-j)<<endl;
		}
	for(i=1;i<row;i++)
			for(j=col-1;j>i+col-1-row&&j>=0;j--){
				cout<<*(*(a+i+col-j-1)+j)<<endl;
			}
	return 0;
}
