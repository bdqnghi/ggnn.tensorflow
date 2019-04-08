/*
 * 14.cpp
 *
 *  Created on: 2013-12-7
 *      Author: Administrator
 */

int main()
{
	int row,col,i,j,s,*p=NULL;
	cin>>row>>col;
	int a[100][100];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			{
			cin>>*(*(a+i)+j);
			//cin>>a[i][j];//????
			}
 for(s=0;s<=row+col-2;s++)//??????????
 {
	 for(i=0;i<row;i++)
	 if(s-i<col&&s-i>=0)
	 {
		 cout<<*(*(a+i)+s-i)<<endl;
		// cout<<a[i][s-i]<<endl;
	 }

 }
  return 0;
}
/*??????????????????*/
