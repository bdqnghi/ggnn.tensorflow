/*
 * juzhen.cpp
 *
 *  Created on: 2010-11-24
 *      Author: l
 */
int main(){
	int i,j;
	int x1,y1;
	cin>>x1>>y1;
	int a[x1][y1];
for(i=0;i<x1;i++)
	for(j=0;j<y1;j++)
	cin>>a[i][j];
int x2,y2;
	cin>>x2>>y2;
	int b[x2][y2];
for(i=0;i<x2;i++)
	for(j=0;j<y2;j++)
	cin>>b[i][j];
	int c[x1][y2];

	for(i=0;i<x1;i++)
		for(j=0;j<y2;j++)
		{
			c[i][j]=0;
			for(int k=0;k<x2;k++)
				c[i][j]+=a[i][k]*b[k][j];//??c???????
		}


	for(i=0;i<x1;i++)
	{	for(j=0;j<y2-1;j++)
				cout<<c[i][j]<<" ";
	cout<<c[i][y2-1]<<endl;;//?????
	}


	return 0;
}
