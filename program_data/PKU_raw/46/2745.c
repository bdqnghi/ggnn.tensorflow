/*
 * 1204.cpp
 *
 *  Created on: 2012-12-4
 *      Author: wangyinzhi
 */
int a[100][100],b[10000],x,y,k=0;
int cube(int c,int x,int y)
{
	if(x<=0||y<=0) return 0;
	for(int i=c;i<y;i++){
		b[k]=a[c][i];
		k++;

	}
	for(int j=c+1;j<x;j++){
		b[k]=a[j][y-1];
		k++;

	}
	for(int r=y-2;r>=c;r--){
		b[k]=a[x-1][r];
		k++;

	}
	for(int s=x-2;s>=c+1;s--){
		b[k]=a[s][c];
		k++;

	}
	cube(c+1,x-1,y-1);

}
int main(){
	int row,col,i,j,n;
	cin>>row>>col;
	n=row*col;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	cube(0,row,col);
	for(i=0;i<n;i++){
	cout<<b[i]<<endl;
		}
	return 0;
}
