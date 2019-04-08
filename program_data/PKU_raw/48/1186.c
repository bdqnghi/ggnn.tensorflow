int a[9][9]={0},m,n;
void produce(int i,int j,int n)
{
	if(n == 0)
	{
		return;
	}
	else
	{
		a[i - 1][j - 1] += m;
		a[i - 1][j] += m;
		a[i - 1][j + 1] += m;
		a[i][j - 1] +=m;
		a[i][j] += m;
		a[i][j + 1] += m;
		a[i + 1][j - 1] += m;
		a[i + 1][j] += m;
		a[i + 1][j + 1] += m;
		produce(i,j,n-1);
		produce(i,j,n-1);
		produce(i-1,j-1,n-1);
		produce(i-1,j,n-1);
		produce(i-1,j+1,n-1);
		produce(i,j-1,n-1);
		produce(i,j+1,n-1);
		produce(i+1,j-1,n-1);
		produce(i+1,j,n-1);
		produce(i+1,j+1,n-1);
	}
}


int main()
{
	cin>>m>>n;
	a[4][4]=m;
	produce(4,4,n);
	int row=0,col=0;
	for(row=0;row<=8;row++)
	{
		for(col=0;col<=8;col++)
		{
			if(col != 8)
			{
				cout<<a[row][col]<<" ";
			}
			else
			{
				cout<<a[row][col]<<endl;
			}
		}
	}
	return 0;
}