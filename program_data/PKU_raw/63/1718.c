/**  
* @file ????  .cpp  
* @author ??? 
* @date   2013-11-01  * @description 
*          ??????:????   */ 
int main ()
{
	int a[101][101],b[101][101],c[101][101];
	int x1,y1,x2,y2,number;
	cin>>x1>>y1;
	for(int i=0;i<x1;i++)
	{
		for (int j=0;j<y1;j++)
		{
			cin>>number;
			a[i][j]=number;
		}
	}
	cin>>x2>>y2;
	for(int i=0;i<x2;i++)
	{
		for (int j=0;j<y2;j++)
		{
			cin>>number;
			b[i][j]=number;
		}
	}
	for(int i=0;i<x1;i++)
	{
		for(int j=0;j<y2;j++)
		{
			int sum=0 ;
			for(int k=0;k<y1;k++)
			{
				sum=sum+a[i][k]*b[k][j] ;
			}
			c[i][j]=sum;
			if(j==(y2-1))
				cout<<c[i][j];
			else
				cout<<c[i][j]<<" ";
		}
		cout << endl;

	}
	return 0 ;
}