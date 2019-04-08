/*
 * 1028-1.cpp
 *
 *  Created on: 2011-11-3
 *      Author: Administrator
 */
int main (){
	int col,row,i,j,k;
	cin>>row>>col;
	int a[row][col];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>a[i][j];
	for(k=0;k<col;k++)
		for(i=0,j=k;(i<row)&&(j>=0);i++,j--)
			cout<<a[i][j]<<endl;
	for(k=1;k<row;k++)
			for(i=k,j=col-1;(i<row)&&(j>=0);i++,j--)
				cout<<a[i][j]<<endl;

	return 0;


}
