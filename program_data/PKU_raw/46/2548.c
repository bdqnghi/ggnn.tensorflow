/*
 * 6.cpp
 *
 *  Created on: 2012-11-9
 *      Author: AK
 */
int main(){
	int row,col,i,j,head,bottom,left,right;
	cin>>row>>col;
	int a[100][100];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			{cin>>a[i][j];}
	head=0,bottom=row-1,left=0,right=col-1;i=0;
	for(;head<=bottom&&left<=right;){
		if(head>bottom||left>right) break;
		for(j=left;j<=right;j++)
			cout<<a[i][j]<<endl;
		j--;
		head++;
		if(head>bottom||left>right) break;
		for(i=head;i<=bottom;i++)
			cout<<a[i][j]<<endl;
		i--;
		right--;
		if(head>bottom||left>right) break;
		for(j=right;j>=left;j--)
			cout<<a[i][j]<<endl;
		j++;
		bottom--;
		if(head>bottom||left>right) break;
		for(i=bottom;i>=head;i--)
			cout<<a[i][j]<<endl;
		i++;
		left++;
	}
	return 0;
}