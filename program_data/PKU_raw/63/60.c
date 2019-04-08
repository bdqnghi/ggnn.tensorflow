int main()
{
 int a[100][100],b[100][100],c[100][100],x1,y1,x2,y2,i,j,k; //a,b,c????????,x1,y1,x2,y2?a,b?????,ijk?????
 for(i=0;i<100;i++)
  for(j=0;j<100;j++)
   {
    a[i][j]=0;
    b[i][j]=0;
    c[i][j]=0;           //?????????0
   }
 cin>>x1>>y1;            //??a???
 for(i=0;i<x1;i++)
  for(j=0;j<y1;j++)
   cin>>a[i][j];         //????a
 cin>>x2>>y2;            //??b???
 for(i=0;i<x2;i++)
  for(j=0;j<y2;j++)
   cin>>b[i][j];         //????b
 for(i=0;i<x1;i++)
  for(j=0;j<y2;j++)
   for(k=0;k<y1;k++)
    c[i][j]+=a[i][k]*b[k][j];       //??????
 for(i=0;i<x1;i++)
  {
   for(j=0;j<y2-1;j++)
    cout<<c[i][j]<<" ";
   cout<<c[i][y2-1]<<endl;            //?????
  }
 return 0;
}