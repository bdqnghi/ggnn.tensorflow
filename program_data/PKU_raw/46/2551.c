int main()
{
	int array[101][101],row,col;
	int i=0,j=0,sum=0;
	cin>>row>>col;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		cin>>array[i][j];
		}}//????
	int n=0;
	for(n=0;;n++){
		for(j=n;j<=col-n-1;j++){
			cout<<array[n][j]<<endl;
			sum++;//???
		}
		if(sum==row*col)break;
		for(i=n+1;i<=row-1-n;i++){
		cout<<array[i][col-n-1]<<endl;
		sum++;
		}//???
	    if(sum==row*col)break;
		for(j=col-n-2;j>=n;j--){
		cout<<array[row-1-n][j]<<endl;
		sum++;
		}//???
			if(sum==row*col)break;
			for(i=row-2-n;i>=n+1;i--){
			cout<<array[i][n]<<endl;
			sum++;
			}//???
				if(sum==row*col)break;
	}
	return 0;
}