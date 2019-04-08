//********************************
//* ??? ????????                      
//* ?????                   *
//********************************
int a[9][9]={0};//??????????
int b[9][9]={0};//??????????

void f(int n)
{
	int i,j;
	if(n>0)
	{
	for(i=1;i<=7;i++)
		for(j=1;j<=7;j++)
		{
			if(a[i][j]>0)
			{
				b[i][j]+=2*a[i][j];
				b[i][j+1]+=a[i][j];
				b[i][j-1]+=a[i][j];
				b[i+1][j]+=a[i][j];
				b[i-1][j]+=a[i][j];
				b[i-1][j+1]+=a[i][j];
				b[i+1][j-1]+=a[i][j];
				b[i+1][j+1]+=a[i][j];
				b[i-1][j-1]+=a[i][j];
			}
		}
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
			{
				a[i][j]=b[i][j];
				b[i][j]=0;
			}
			f(n-1);
	}
	else if(n==0)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(j==0)
					cout<<a[i][j];
				else
					cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
	}
}
int main()
{
	int m,day;
	cin>>m>>day;
	a[4][4]=m;
	f(day);
	return 0;
}