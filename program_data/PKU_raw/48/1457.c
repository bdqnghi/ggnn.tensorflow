// lp.cpp : Defines the entry point for the console application.
//
// ??????.cpp : Defines the entry point for the console application.
//

int a[10][10],b[10][10]={0};
int n,m;
void f(int a[10][10])
{
	int i,j;
	while(n>0)
	{
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			b[i-1][j-1]+=a[i][j];
			b[i][j-1]+=a[i][j];
			b[i+1][j-1]+=a[i][j];
			b[i-1][j]+=a[i][j];
			b[i][j]+=a[i][j]*2;
			b[i+1][j]+=a[i][j];
			b[i-1][j+1]+=a[i][j];
			b[i][j+1]+=a[i][j];
			b[i+1][j+1]+=a[i][j];
		}
	}
    for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			a[i][j]=b[i][j];
			b[i][j]=0;
		}
	}
	n--;
	}
}
int main()
{
	int i,j;
	cin>>m>>n;
	memset(a,0,100);
	a[4][4]=m;
	f(a);
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		{
			if(j<8)
				cout<<a[i][j]<<' ';
			else
			{
				cout<<a[i][j]<<endl;
			}
		}
	return 0;
}