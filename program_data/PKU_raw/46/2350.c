int main()
{ 
  int row,col,a[100][100],i,j,k,b[100][100];
  cin>>row>>col;
  for(i=0;i<=row-1;i++)
   for(j=0;j<=col-1;j++)
    {cin>>a[i][j];
    b[i][j]=0;}
  if(row==1)
   {for(i=0;i<=col-1;i++)  cout<<a[0][i]<<endl;}
else{
  for(i=0;i<=(col-1)/2;i++)
   {for(k=i;k<=col-i-1;k++)
    {if(b[i][k]==0) {cout<<a[i][k]<<endl;b[i][k]=1;}}
    for(k=i+1;k<=row-2-i;k++)
    {if(b[k][col-1-i]==0) {cout<<a[k][col-1-i]<<endl;b[k][col-1-i]=1;}}
    for(k=col-1-i;k>=i;k--)
    {if(b[row-1-i][k]==0) {cout<<a[row-1-i][k]<<endl;b[row-1-i][k]=1;}}
    for(k=row-2-i;k>=i+1;k--)
    {if(b[k][i]==0) {cout<<a[k][i]<<endl;b[k][i]=1;}}
   }}
 return 0;}