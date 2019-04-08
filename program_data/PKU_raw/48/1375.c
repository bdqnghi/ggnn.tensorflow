int num[9][9]={0};
int t[9][9]={0};
int main()
{
	int n,m;
	cin>>m>>n;
	num[4][4]+=m;
	t[4][4]+=m;
	do
	{
		for(int i=1;i<8;i++)
		{
			for(int j=1;j<8;j++)
			{
				int temp=t[i][j];
				for(int k=i-1;k<i+2;k++)
				{
					for(int p=j-1;p<j+2;p++)
					{
						num[k][p]+=temp;
					}
				}
			}
		}
				for(int i=1;i<8;i++)
				{
					for(int j=1;j<8;j++)
					{
						t[i][j]=num[i][j];
					}
				}
				n--;
			}while(n>0);




			for(int i=0;i<9;i++)
			{
				for(int j=0;j<9;j++)
				{
					cout<<num[i][j];
					if(j<8) cout<<" ";
					else cout<<endl;
				}
			}
			return 0;
		}









