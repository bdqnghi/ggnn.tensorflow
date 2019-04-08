int main()
{
	int row,col,i,j,k,p,a[101][101],l,h,n;
	cin>>row>>col;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>a[i][j];
	l=col,h=row,p=0,n=0;
	while(1){
		for(j=p;j<l-p;j++){
				cout<<a[p][j]<<endl;
				n++;
		}
		if(n==row*col)break;
		for(i=p+1;i<h-p;i++){
			cout<<a[i][l-p-1]<<endl;
			n++;
		}
		if(n==row*col)break;
		for(j=l-2-p;j>=p;j--){
			cout<<a[h-p-1][j]<<endl;
			n++;
		}
		if(n==row*col)break;
		for(i=h-2-p;i>p;i--){
			cout<<a[i][p]<<endl;
			n++;
		}
		if(n==row*col)break;
		p++;
	}
	return 0;
}
