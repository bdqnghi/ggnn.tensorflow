int main()
{
int n;
cin>>n;
int number=0;
char a[100][100]={{0}};
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
{
cin>>a[i][j];
if(a[i][j]=='@') number++;
}
int m;
cin>>m;
for(int k=1;k<m;k++)
{
	char b[100][100]={{0}};
for(int x=0;x<100;x++)
for(int y=0;y<100;y++)
{
	if(a[x][y]=='@')
	{
	if((x==0)&&(y==0))
	{
	   b[1][0]='%'	;b[0][1]='%';
}
	else if((x==0)&&(y==n-1))
	{
	   b[0][n-2]='%'	;b[1][n-1]='%';
}
	else if((x==n-1)&&(y==0))
	{
	   b[n-1][1]='%'	;b[n-2][0]='%';
}
	else if((x==n-1)&&(y==n-1))
	{
	   b[n-2][n-1]='%'	;b[n-1][n-2]='%';
}
	else if((x==0)&&(y!=0)&&(y!=n-1))
	{
	   b[1][y]='%'	;b[0][y-1]='%';b[0][y+1]='%';
}
	else if((x==n-1)&&(y!=0)&&(y!=n-1))
	{
	   b[n-2][y]='%'	;b[n-1][y-1]='%';b[n-1][y+1]='%';
}
	else if((y==n-1)&&(x!=0)&&(x!=n-1))
	{
	   b[x][n-2]='%'	;b[x+1][n-1]='%';b[x-1][n-1]='%';
}
	else if((y==0)&&(x!=0)&&(x!=n-1))
	{
	   b[x][1]='%'	;b[x+1][0]='%';b[x-1][0]='%';
}
else
{b[x-1][y]='%';b[x+1][y]='%';b[x][y-1]='%';b[x][y+1]='%';}
}
}
for(int u=0;u<100;u++)
for(int v=0;v<100;v++)
{
if((a[u][v]=='.')&&(b[u][v]=='%')) {a[u][v]='@';number++;}
}
}
cout<<number;
return 0;
}
