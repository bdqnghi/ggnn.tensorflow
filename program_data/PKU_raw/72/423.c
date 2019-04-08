//*****************************
//*???2011?1?9?         *
//*??????               *
//*?????3                *   
//*****************************
int main()//???
{//?????
	int m=0,n=0;
	int gaocheng[100][100];
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>gaocheng[i][j];
	int x=0,y=0;
	for(x=0;x<m;x++)
	{
		for(y=0;y<n;y++)
		{
			if(x==0)
			{
				if(y==0)
				{
					if(gaocheng[x][y]>=gaocheng[x+1][y]&&gaocheng[x][y]>=gaocheng[x][y+1])
						cout<<x<<" "<<y<<endl;
					else continue;
				}
				else if(y==n-1)
				{
					if(gaocheng[x][y]>=gaocheng[x+1][y]&&gaocheng[x][y]>=gaocheng[x][y-1])
						cout<<x<<" "<<y<<endl;
					else continue;
				}
				else
				{
					if(gaocheng[x][y]>=gaocheng[x+1][y]&&gaocheng[x][y]>=gaocheng[x][y+1]&&gaocheng[x][y]>=gaocheng[x][y-1])
						cout<<x<<" "<<y<<endl;
					else continue;
				}
			}
			else if(x==m-1)
			{
				if(y==0)
				{
					if(gaocheng[x][y]>=gaocheng[x-1][y]&&gaocheng[x][y]>=gaocheng[x][y+1])
						cout<<x<<" "<<y<<endl;
					else continue;
				}
				else if(y==n-1)
				{
					if(gaocheng[x][y]>=gaocheng[x-1][y]&&gaocheng[x][y]>=gaocheng[x][y-1])
						cout<<x<<" "<<y<<endl;
					else continue;
				}
				else
				{
					if(gaocheng[x][y]>=gaocheng[x-1][y]&&gaocheng[x][y]>=gaocheng[x][y+1]&&gaocheng[x][y]>=gaocheng[x][y-1])
						cout<<x<<" "<<y<<endl;
					else continue;
				}
			}
			else
			{
				if(y==0)
				{
					if(gaocheng[x][y]>=gaocheng[x-1][y]&&gaocheng[x][y]>=gaocheng[x][y+1]&&gaocheng[x][y]>=gaocheng[x+1][y])
						cout<<x<<" "<<y<<endl;
					else continue;
				}
				else if(y==n-1)
				{
					if(gaocheng[x][y]>=gaocheng[x-1][y]&&gaocheng[x][y]>=gaocheng[x][y-1]&&gaocheng[x][y]>=gaocheng[x+1][y])
						cout<<x<<" "<<y<<endl;
					else continue;
				}
				else
				{
					if(gaocheng[x][y]>=gaocheng[x-1][y]&&gaocheng[x][y]>=gaocheng[x][y+1]&&gaocheng[x][y]>=gaocheng[x][y-1]&&gaocheng[x][y]>=gaocheng[x+1][y])
						cout<<x<<" "<<y<<endl;
					else continue;
				}
			}
		}
	}
	return 0;
}//?????