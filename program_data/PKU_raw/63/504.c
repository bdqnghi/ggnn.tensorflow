int main()
{
int k,c[101][101],i,j,a[101][101],b[101][101],x1,x2,y1,y2;
scanf("%d%d",&x1,&y1);
for(i=1;i<=x1;i++)
  for(j=1;j<=y1;j++)
    scanf("%d",&a[i][j]);
scanf("%d%d",&x2,&y2);
for(i=1;i<=x2;i++)
  for(j=1;j<=y2;j++)
    scanf("%d",&b[i][j]);
for(i=1;i<=x1;i++)
  for(j=1;j<=y2;j++)
    c[i][j]=0;
for(i=1;i<=x1;i++)
  for(j=1;j<=y2;j++)
    for(k=1;k<=x2;k++)
      c[i][j]+=a[i][k]*b[k][j];
for(i=1;i<=x1;i++)
  {for(j=1;j<y2;j++)
    cout<<c[i][j]<<" ";
    cout<<c[i][y2]<<endl;}
return 0;
}
