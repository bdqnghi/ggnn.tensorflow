/*
 * qmfx05.cpp
 *
 *  Created on: 2011-1-1
 *      Author: Administrator
 */
int main()
{
	int n;
	cin>>n;
	const int n1=n;
	int a[n1][21];
	int i,j;
	for(i=0;i<n1;i++)
	{
		cin>>a[i][0];
		if(a[i][0]==0)
		{
			cout<<"60"<<endl;
			continue;
		}
		else
		{
			for(j=1;j<=a[i][0];j++)
			{
				cin>>a[i][j];
			}
			for(j=1;j<=a[i][0];j++)
			{
				if(j==a[i][0])
				{
					if((a[i][j]+3*j)<60)
					{
						cout<<60-3*j<<endl;
					}
				}
				if((a[i][j]+3*j)==60)
				{
					cout<<60-3*j<<endl;
					break;
				}
				if((a[i][j]+3*j)>60&&(a[i][j]+3*j<=63))
				{
					cout<<a[i][j]<<endl;
					break;
				}
				if((a[i][j]+3*j)>63)
				{
					cout<<63-3*j<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
