
void f(int step);
int n,m;
char a[102][102]={{'\0'}};
int b[102][102]={0};
int main()
{

cin >>n;
for(int i= 1;i<=n;i++)
	for(int j= 1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='@')b[i][j]=1;
			if(a[i][j]=='.')b[i][j]=-1;
		}
cin>>m;
		
for(int i= 0;i<m-1;i++)
	f(i);
	int temp=0;
for(int i= 1;i<=n;i++)
	for(int j= 1;j<=n;j++)
		if(b[i][j] > 0)
			temp++;
cout<<temp;
cin.get();cin.get();
return 0;
}
void f(int step)
{
	for(int i= 1;i<=n;i++)
		for(int j= 1;j<=n;j++)
		if(b[i][j] <= step+1 && b[i][j]>0)
		{
			if(b[i-1][j] == -1)b[i-1][j] = b[i][j]+1;
			if(b[i+1][j] == -1)b[i+1][j] = b[i][j]+1;
			if(b[i][j-1] == -1)b[i][j-1] = b[i][j]+1;
			if(b[i][j+1] == -1)b[i][j+1] = b[i][j]+1;
		}
		//for(int i= 1;i<=n;i++){for(int j= 1;j<=n;j++)cout<<b[i][j]<<"   ";cout<<endl;}cout<<endl;
}
