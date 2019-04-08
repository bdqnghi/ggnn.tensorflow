/*
 * 111110_03_tree.cpp
 *
 *  Created on: 2011-11-10
 *      Author: Alfalfa
 */
int main(){
	int x,y,i,j,k1[1000],k2[1000],m=0,n=0;
	cin>>x>>y;
	for(i=0;x>=1;i++) //??????x?????? ????k1
	{
		k1[i]=x;
		x=(x-x%2)/2;
		m++;
	}
	for(i=0;y>=1;i++) //y????k2
	{
		k2[i]=y;
		y=(y-y%2)/2;
		n++;
	}
	for(i=0;i<m;i++) //?k1 k2???????
		for(j=0;j<n;j++)
			if(k1[i]==k2[j])
			{
				cout<<k1[i];
				i=1001;
			}
	return 0;
}
