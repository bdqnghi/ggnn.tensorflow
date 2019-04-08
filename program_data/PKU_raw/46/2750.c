/*
 * huixingbianli.cpp
 *
 *  Created on: 2012-12-8
 *      Author: Lenovo
 */
int array[100][100];
int row,col;
void out(int beginx,int beginy,int r,int c)
{
	if(r==0||c==0) return;
	int x,y;
	if(r==1)
	{
		for(x=beginx;x<beginx+c;x++)
			cout<<array[beginy][x]<<endl;
		return;
	}
	if(c==1)
	{
		for(y=beginy;y<beginy+r;y++)
			cout<<array[y][beginx]<<endl;
		return;
	}
	for(x=beginx;x<beginx+c;x++)
		cout<<array[beginy][x]<<endl;
	x--;
	for(y=beginy+1;y<beginy+r;y++)
		cout<<array[y][x]<<endl;
	y--;
	for(x=x-1;x>=beginx;x--)
		cout<<array[y][x]<<endl;
	x++;
	for(y=y-1;y>beginy;y--)
		cout<<array[y][x]<<endl;
	beginx++;
	beginy++;
	r-=2;
	c-=2;
	out(beginx,beginy,r,c);
}
int main()
{

	int row,col,i,j;
	cin>>row>>col;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>array[i][j];
	out(0,0,row,col);
	return 0;
}
