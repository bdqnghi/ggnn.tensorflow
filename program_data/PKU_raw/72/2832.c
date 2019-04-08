int main()
{
int m,n;
int sz[22][22];
scanf("%d%d",&m,&n);
for(int k=0;k<m;k++){
for(int l=0;l<n;l++){
scanf("%d",&(sz[k][l]));} 
}
for(int i=0; i<m;i++)
{
for(int j=0; j<n;j++)
{
if(i==0)
{
    if(((j==0)&&(sz[i][j]>=sz[i+1][j])&&(sz[i][j]>=sz[i][j+1]))||
    ((j==n-1)&&(sz[i][j]>=sz[i+1][j])&&(sz[i][j]>=sz[i][j-1]))||
    ((sz[i][j]>=sz[i][j-1])&&(sz[i][j]>=sz[i][j+1])&&(sz[i][j]>=sz[i+1][j])))
    {printf("%d %d\n",i,j);}
}
else
{
if(i==m-1)
{
    if(((j==0)&&(sz[i][j]>=sz[i-1][j])&&(sz[i][j]>=sz[i][j+1]))||
    ((j==n-1)&&(sz[i][j]>=sz[i-1][j])&&(sz[i][j]>=sz[i][j-1]))||
    ((sz[i][j]>=sz[i][j-1])&&(sz[i][j]>=sz[i][j+1])&&(sz[i][j]>=sz[i-1][j])))
    {printf("%d %d\n",i,j);}
}
else
{
    if(((j==0)&&(sz[i][j]>=sz[i+1][j])&&(sz[i][j]>=sz[i][j+1])&&(sz[i][j]>=sz[i-1][j]))||
    ((j==n-1)&&(sz[i][j]>=sz[i-1][j])&&(sz[i][j]>=sz[i+1][j])&&(sz[i][j]>=sz[i][j-1]))||
    ((sz[i][j]>=sz[i][j-1])&&(sz[i][j]>=sz[i][j+1])&&(sz[i][j]>=sz[i-1][j])&&(sz[i][j]>=sz[i+1][j])))
    {printf("%d %d\n",i,j);}
}
}
}
}
return 0;
}