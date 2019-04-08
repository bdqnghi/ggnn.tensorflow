//????(???)


int chess[15][15][5];
int d;

int f(int i,int j,int k)
{
	if(i<1||i>9||j<1||j>9) return 0;
	if(chess[i][j][k]!=-1) return chess[i][j][k];
	chess[i][j][k]=f(i,j,k-1)*2+f(i,j-1,k-1)+f(i,j+1,k-1)+f(i+1,j,k-1)+f(i-1,j,k-1)+f(i-1,j-1,k-1)+f(i-1,j+1,k-1)+f(i+1,j-1,k-1)+f(i+1,j+1,k-1);
	return chess[i][j][k];
}

int main()
{
	int i,j,k,s,t;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			chess[i][j][0]=0;
			for(t=1;t<=4;t++)
				chess[i][j][t]=-1;
		}
	}
	cin>>chess[5][5][0]>>d;

	for(i=1;i<=9;i++)
	{
		cout<<f(i,1,d);
		for(j=2;j<=9;j++)
		{
			cout<<" "<<f(i,j,d);
		}
		cout<<endl;
	}
	return 0;
}
