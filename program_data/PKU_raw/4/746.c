int main(){
	int a[105][105]={0},row,col;
	cin>>row>>col;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>*(*(a+i)+j);
			}
		}//???? 
	for(int i=0;i<row+col-1;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				if(j+k==i)cout<<*(*(a+j)+k)<<endl;
				}
			}
		}//?? 
		
		return 0;
	} 
