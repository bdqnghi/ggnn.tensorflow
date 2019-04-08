/*
 * 05.cpp
 *
 *  Created on: 2010-11-20
 *      Author: jsgl
 */
int main()
{
	int x1,y1;
	cin>>x1>>y1;
	int a[x1][y1];//????a
	int i,j;
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		{
			cin>>a[i][j];//??????a
		}
	}
	int x2,y2;
	cin>>x2>>y2;
	int b[x2][y2];//????b
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
		{
			cin>>b[i][j];//????b
		}
	}
	int c[x1][y2];
	int k;
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			int sum=0;
			for(k=0;k<y1;k++)
			{
				sum=sum+a[i][k]*b[k][j];//????
			}
			c[i][j]=sum;//??????????c?
		}
	}
	for(i=0;i<x1;i++)
	{
		cout<<c[i][0];
		for(j=1;j<y2;j++)
		{
			cout<<" "<<c[i][j];//????c
		}
		cout<<endl;
	}
	return 0;
}
