/*
 * Filename:homework_duijiaoxian.cpp
 * Author: Wu Yiming
 *  Created on: 2011-10-31
 * Function: print it along duijiaoxian
 */



int main ()
{
	int row,col;
	cin>>row>>col;
	int a[row][col];
	int i,j;
	int sum;
	for (i=0;i<row;i++)
		for (j=0;j<col;j++)
			cin>>a[i][j];
	for (sum=0;sum<col-1;sum++)
	{
		for(j=sum;j>=0;j--)
		{
			i=sum-j;
			if (i>=row)
				break;
			cout<<a[i][j]<<endl;
		}
	}
	for (sum=col-1;sum<=row+col-2;sum++)
	{
		for(j=col-1;j>=0;j--)
		{
			i=sum-j;
			if (i>=row)
				break;
			cout<<a[i][j]<<endl;
		}
	}
	return 0;

}
