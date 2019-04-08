/*
 * 123.cpp
 *
 *  Created on: 2011-11-4
 *      Author: 11096
 */
int main()
{
	int i,j,k=0;
	int a[5][5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++) //??????
			if((a[i][j]>=a[i][1])&&(a[i][j]>=a[i][2])&&(a[i][j]>=a[i][3])&&(a[i][j]>=a[i][4])&&(a[i][j]>=a[i][0])&&(a[i][j]<=a[1][j])&&(a[i][j]<=a[2][j])&&(a[i][j]<=a[3][j])&&(a[i][j]<=a[4][j])&&(a[i][j]<=a[0][j]))
				{ cout<<i+1<<" "<<j+1<<" "<<a[i][j]; k++; }
	if(k==0) cout<<"not found"; //????????Notfound
	return 0;

}
