
int main()
{
	int a[100][100]={0};
	int row,col;
	cin >> row>> col;
	for( int i=0;i<row;i++)
		for ( int j=0;j<col;j++)
			cin >> *(*(a+i)+j);
	for( int m=0;m<row+col-1; m++)
	 for( int i=0 ;i<row ;i++)
		 for(int j=0;j<col;j++)
			 if(i+j==m)
				 cout<<*(*(a+i)+j)<<endl;
	return 0;

}