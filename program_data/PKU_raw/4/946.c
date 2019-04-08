/*
 * 3.cpp
 *
 *  Created on: 2012-11-10
 *      Author: lenovo
 */
int main()
{
	int row,col,i,j,k;
	cin>>row>>col;
	int a[row][col];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>a[i][j];
	for(j=0;j<col;j++)
		for(i=0,k=0;i<row&&(j-k)>=0;i++,k++)
			cout<<a[i][j-k]<<endl;
	for(i=1;i<row;i++)
		for(j=col-1,k=0;j>=0&&(i+k)<row;j--,k++)
			cout<<a[i+k][j]<<endl;
	return 0;
}
