int main()
{
	char a[101][101]={0};
	int b[101][101]={0};
int n,m,i,j,k,h=0;
cin>>n;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{cin>>a[i][j];
if(a[i][j]=='@')
{b[i][j]=101;h=h+1;}
else if(a[i][j]=='#')
b[i][j]=0;
else b[i][j]=1;}

cin>>m;
for(k=0;k<m-1;k++)
{
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if(b[i][j]==101-k)
{b[i][j]=100-k;
if(i>0&&b[i-1][j]==1)
b[i-1][j]=100-k;
if(j>0&&b[i][j-1]==1)
b[i][j-1]=100-k;
if(i<n-1&&b[i+1][j]==1)
b[i+1][j]=100-k;
if(j<n-1&&b[i][j+1]==1)
b[i][j+1]=100-k;}
}}
h=0;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(b[i][j]!=0&&b[i][j]!=1)
h++;
cout<<h<<endl;
return 0;
}