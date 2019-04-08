int main(){
	int row,col,i,j;
	cin>>row>>col;
	int a[100][100];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>*(*(a+i)+j);
	for(int t=0;t<row+col-1;t++)
		for(j=(col-1>t?t:col-1);t-j<=row-1&&j>=0;j--)
			cout<<*(*(a+t-j)+j)<<endl;
	return 0;
}