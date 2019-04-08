/*
 * trees.cpp
 *
 *  Created on: 2012-11-17
 *      Author: Administrator
 */
int main()
{
	int x=0,y=0;
	cin>>x>>y;
	double row1=0,row2=0;
	row1=ceil(log2((double)(x+1)));
	row2=ceil(log2((double)(y+1)));
	while (row2>row1){
		y=y/2;
		row2=ceil(log2((double)(y+1)));
	}
	while (row1>row2){
			x=x/2;
			row1=ceil(log2((double)(x+1)));
		}
	while (x!=y){
		x=x/2;
		y=y/2;
	}
	cout <<x<<endl;
	return 0;
}
