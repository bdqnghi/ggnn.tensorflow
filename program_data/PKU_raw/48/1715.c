int leap;
int direction[8][2]={{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}} ;
int n;

void born (int a[9][9],int d)
{
	int m=0,w,e,b[9][9]={0};
	if (d==0)
	{
		return ;
	}
	for (int i=0;i<9;i++)
		for (int j=0;j<9;j++)
			b[i][j]=a[i][j];
	for (int i=0;i<9;i++)
	{
		for (int j=0;j<9;j++)
		{
			if (b[i][j]!=0)
			{
				w=b[i][j];
				a[i][j]+=2*w;
				for (m=0;m<8;m++)
				{
					e=b[i+direction[m][0]][j+direction[m][1]];
					a[i+direction[m][0]][j+direction[m][1]]+=w;
				}
			}
		}
	}
	for (int i=0;i<9;i++)
		for (int j=0;j<9;j++)
			a[i][j]-=b[i][j];
	born (a,d-1);
}
int main ()
{
	int m,a[9][9]={0};
	cin >>m>>n;
	a[4][4]=m;
	born (a,n);
	for (int i=0;i<9;i++)
	{
		leap=0;
		for (int j=0;j<9;j++)
		{
			if (leap==0)
			{
				leap=1;
				cout <<a[i][j];
			}
			else cout <<" "<<a[i][j];
		}
		cout <<endl;
	}

	return 0;
}