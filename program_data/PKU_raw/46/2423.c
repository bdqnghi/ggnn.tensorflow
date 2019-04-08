int A[100][100]={0};
void shuchu1(int a,int b,int c,int d)//a<b&&c<d
{
	for(int i=c;i<=d;i++)
	{
		cout<<A[a][i]<<endl;
	}
	for(int i=a+1;i<=b;i++)
	{
		cout<<A[i][d]<<endl;
	}
	for(int i=d-1;i>=c;i--)
	{
		cout<<A[b][i]<<endl;
	}
	for(int i=b-1;i>=a+1;i--)
	{
		cout<<A[i][c]<<endl;
	}
}
void shuchu2(int a,int b,int c,int d)//a==b&&c<d
{
	for(int i=c;i<=d;i++)
	{
		cout<<A[a][i]<<endl;
	}
	
}
void shuchu3(int a,int b,int c,int d)//c==d&&a<b
{
	for(int i=c;i<=d;i++)
	{
		cout<<A[a][i]<<endl;
	}
	for(int i=a+1;i<=b;i++)
	{
		cout<<A[i][d]<<endl;
	}
	
}
void shuchu4(int a,int b,int c,int d)//a==b&&c==d
{
	cout<<A[a][c]<<endl;
}
int main()
{
	
	int row,col;
	cin>>row>>col;
	for(int i=0;i<row;i++)//?????????
	{
		for(int j=0;j<col;j++)
		{
			cin>>A[i][j];
		}
	}
	int a=0;
	int c=0;
	int b=row-1;
	int d=col-1;
	while(b>=a&&d>=c)
	{
		if(a<b&&c<d)
		{
			shuchu1(a,b,c,d);
		}
		if(a==b&&c<d)
		{
			shuchu2(a,b,c,d);
		}
		if(c==d&&a<b)
		{
			shuchu3(a,b,c,d);
		}
		if(a==b&&c==d)
		{
			shuchu4(a,b,c,d);
		}
		a++;b--;c++;d--;
	}
	
	return 0;//????

}