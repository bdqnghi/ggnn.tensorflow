/*
 * 1104-1.cpp
 *
 *  Created on: 2011-11-5
 *      Author: Administrator
 */
int main(){
	int row,col;
	cin>>row>>col;
	int a[row][col];
	int i,j,k,m,s=0;
	m=row*col;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>a[i][j];




	for(i=0;i<row/2;i++){
		for(j=i;j<col-i-1;j++){
			if(s>=m)
										break;
			else{
				cout<<a[i][j]<<endl;
				s++;}

		}


		for(k=i;k<row-i-1;k++){
			if(s>=m)
								break;
			else{

			cout<<a[k][col-i-1]<<endl;
				s++;}

		}


		for(j=col-i-1;j>i;j--){
			if(s>=m)
								break;
			else{
				cout<<a[row-1-i][j]<<endl;
				s++;}

		}

		for(k=row-i-1;k>i;k--){
			if(s>=m)
								break;
			else{
				cout<<a[k][i]<<endl;
				s++;}


		}





	}
	if(row%2){
		for(j=row/2;j<col-row/2;j++)
			cout<<a[row/2][j]<<endl;
	}

	return 0;

}
