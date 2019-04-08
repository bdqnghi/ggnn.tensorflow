/*
 * 201311291.cpp
 *
 *  Created on: 2013-11-29
 *      Author: 13248
 */

int x[1000][1000];
int juzheng(int y)
{   if(y==1) {return 0;}
	for(int i=1;i<=y;i++)
		{
		int min=100000;
		for(int j=1;j<=y;j++)
		{if(x[i][j]<min) min=x[i][j];}
		for(int j=1;j<=y;j++)
			x[i][j]=x[i][j]-min;
		}
	for(int i=1;i<=y;i++)
			{
			int min=100000;
			for(int j=1;j<=y;j++)
			{if(x[j][i]<min) min=x[j][i];}
			for(int j=1;j<=y;j++)
				x[j][i]=x[j][i]-min;
			}
	int min1=x[2][2];
	for(int i=2;i<y;i++)
		x[1][i]=x[1][i+1];
	for(int i=2;i<y;i++)
			x[i][1]=x[i+1][1];
	for(int i=3;i<=y;i++)
		for(int j=3;j<=y;j++)
      x[i-1][j-1]=x[i][j];

	return  min1+juzheng(y-1);
}
int main()
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
		{
		for(int j=1;j<=n;j++)
		   for(int k=1;k<=n;k++)
			   cin>>x[j][k];
		//cout<<juzheng(b,n)<<endl;
		cout<<juzheng(n)<<endl;
		}

			return 0;
}