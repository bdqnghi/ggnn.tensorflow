int main(){
	int row , col ;
	int a[100][100];
	int i,j;
	int flag=1; 
	cin >> row >> col ;
	int  topBorder=0,bottomBorder=row-1;
	int leftBorder=0,rightBorder=col-1;
	int x=0,y=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<row*col;i++){
			cout<<a[y][x]<<endl;
		if(flag==1){
			if(x+1>rightBorder){
				flag=2;
				y++;
				topBorder++;
			}
			else{
			x++;
			}
		}
		else if(flag==2){
			if(y+1>bottomBorder){
				flag=3;
				x--;
				rightBorder--;
			}
			else{
				y++;
			}
		}
			else if(flag==3){
				if(x-1<leftBorder)
				{
					flag=4;
					y--;
					bottomBorder--;
				}
				else{
					x--;
				}
			}
			else{
				if(y-1<topBorder){
					flag=1;
					x++;
					leftBorder++;
				}
				else{
					y--;
				}
			}
		}
	return 0;
}