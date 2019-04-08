int main(){
	int a[100][100]={0},row,col,num=0;
	cin>>row>>col;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;;i++){
		if(num>=row*col)break;
		int b,x,y,z;
		for(b=i;b<col-i;b++){
			cout<<a[i][b]<<endl;
			num++;
		}
		if(num>=row*col)break;
		for(x=i+1;x<row-i;x++){
			cout<<a[x][b-1]<<endl;
			num++;                 
		}
		if(num>=row*col)break;
		for(y=col-i-2;y>=i;y--){
			cout<<a[row-i-1][y]<<endl;
			num++;                    
		}
		if(num>=row*col)break;
		for(z=row-i-2;z>i;z--){
			cout<<a[z][i]<<endl;
			num++;                   
		}
	}
	
	return 0;
}