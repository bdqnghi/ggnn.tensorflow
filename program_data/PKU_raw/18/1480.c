int func(int a[100][100],int rank,int sum)
{
if(rank==1)
return(sum);
int i,j,k,min=1000;//i?????j????
for(i=0;i<=rank-1;i++)
{
for(j=0;j<=rank-1;j++)
{
if(a[i][j]<min)
min=a[i][j];
}
for(j=0;j<=rank-1;j++)
a[i][j]-=min;
min=1000;
}//??????
for(j=0;j<=rank-1;j++)
{
for(i=0;i<=rank-1;i++)
{
if(a[i][j]<min)
min=a[i][j];
}
for(i=0;i<=rank-1;i++)
a[i][j]-=min;
min=1000;
}//??????
sum+=a[1][1];
for(j=1;j<=rank-2;j++)
a[0][j]=a[0][j+1];
for(i=1;i<=rank-2;i++)
a[i][0]=a[i+1][0];
for(i=1;i<=rank-2;i++)
{
for(j=1;j<=rank-2;j++)
a[i][j]=a[i+1][j+1];
}
func(a,rank-1,sum);
}
int main()
{
int n,i,j,k;//i?????j?????k?????
int matrix[100][100]={{0}},sum=0;
scanf("%d",&n);
for(k=1;k<=n;k++)
{
sum=0;
for(i=0;i<=n-1;i++)
{
for(j=0;j<=n-1;j++)
scanf("%d",&matrix[i][j]);
}
printf("%d\n",func(matrix,n,sum));
}
}
