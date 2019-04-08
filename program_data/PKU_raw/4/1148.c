/*
 * bianlishuzu.cpp
 *
 *  Created on: 2013-12-6
 *      Author: ???
 */
int main()
{
	int row=0,col=0,i=0,j=0;
	int a[100][100];
	cin>>row>>col;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>*(*(a+i)+j);
	int sum=0;
	for(sum=0;sum<row+col-1;sum++)
	{
		if(sum<col)
		{
			for(i=0,j=sum;i<row&&i<=sum;i++,j--)
				cout<<*(*(a+i)+j)<<endl;
		}
		else
		{
			for(j=col-1,i=sum-col+1;i<row&&j>=0;j--,i++)
				cout<<*(*(a+i)+j)<<endl;
		}
	}
	return 0;
}
