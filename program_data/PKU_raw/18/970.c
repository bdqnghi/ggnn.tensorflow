int main()
{
int n;
int sum[100]={0};
int  a[100][100][100]={0};
int i,j,k,min,t,l;
cin>>n;
for(k=0;k<n;k++)
{t=0;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
cin>>a[k][i][j];
for(l=0;l<n-1;l++)
{
for(i=0;i<n-t;i++)
{
min=a[k][i][0];
for(j=0;j<n-t;j++)
if(a[k][i][j]<min)
min=a[k][i][j];
for(j=0;j<n-t;j++)
a[k][i][j]=a[k][i][j]-min;}

for(j=0;j<n-t;j++)
{
min=a[k][0][j];
for(i=0;i<n-t;i++)
{if(a[k][i][j]<min)min=a[k][i][j];}
for(i=0;i<n-t;i++)
a[k][i][j]=a[k][i][j]-min;}
sum[k]=sum[k]+a[k][1][1];
for(i=0;i<n-t;i++)
for(j=1;j<n-1-t;j++)
{a[k][i][j]=a[k][i][j+1];}
for(j=0;j<n-1-t;j++)
for(i=1;i<n-1;i++)
a[k][i][j]=a[k][i+1][j];
t=t+1;}
cout<<sum[k]<<endl;}
return 0;
}