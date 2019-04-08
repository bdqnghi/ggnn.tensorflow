int main()
{
int I=0,K=0,J=0;

int a[101][101];
int b[101][101];
int c[101][101]={0};

cin>>I>>K;
for(int i=1;i<=I;i++)
	for(int j=1;j<=K;j++)
		cin>>a[i][j];

cin>>K>>J;
for(int i=1;i<=K;i++)
	for(int j=1;j<=J;j++)
		cin>>b[i][j];

for(int j=1;j<=J;j++)
	for(int i=1;i<=I;i++)
		for(int k=1;k<=K;k++)
			c[i][j]+=a[i][k]*b[k][j];

for(int a=1;a<=I;a++)
	{
		for(int b=1;b<=J-1;b++)
		cout<<c[a][b]<<" ";
		cout<<c[a][J]<<endl;
     }

return 0;







}