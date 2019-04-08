int q[9][9]={0},mark[9][9]={0},a[9][9]={0};//????
int d[8][2]={{-1,0},{0,-1},{1,0},{0,1},{-1,-1},{-1,1},{1,-1},{1,1}};//??????
void kuosan(int i,int n)//????
{
	if(i==n+1)//????n?
	{
		for(int k=0;k<9;k++)
		{
			for(int l=0;l<9;l++)
			{
				if(l==0)cout<<q[k][0];
				else cout<<' '<<q[k][l];
			}
			cout<<endl;
		}
	}//????
	else
	{
		for(int j=0;j<9;j++)
			for(int k=0;k<9;k++)
				a[j][k]=q[j][k];//???q?????a?
		for(int j=0;j<9;j++)
			for(int k=0;k<9;k++)
				if(mark[j][k]>0&&mark[j][k]<=i)
				{
					a[j][k]=a[j][k]+2*q[j][k];
					for(int p=0;p<8;p++)
					{
						a[j+d[p][0]][k+d[p][1]]=a[j+d[p][0]][k+d[p][1]]+q[j][k];
						if(mark[j+d[p][0]][k+d[p][1]]==0)mark[j+d[p][0]][k+d[p][1]]=i+1;
					}
				}//????
	    for(int j=0;j<9;j++)
			for(int k=0;k<9;k++)
				q[j][k]=a[j][k]-q[j][k];//??????
		kuosan(i+1,n);//??????
	}
}
int main()
{
	int m,n;
	cin>>m>>n;//??m,n
	q[4][4]=m;mark[4][4]=1;//???
	kuosan(1,n);
	return 0;
}