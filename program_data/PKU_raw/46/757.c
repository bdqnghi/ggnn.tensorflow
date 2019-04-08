int main()
{
 int sz[100][100],i=0,j=0,row,col;
 int hxx,hsx,lxx,lsx,m1,m2,m3,m4,n1,n2;
 scanf("%d%d",&row,&col);
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   scanf("%d",&sz[i][j]);
  }
 }

 hxx=0;hsx=row-1;lxx=0;lsx=col-1;
 for(hxx=0,hsx=row-1,lxx=0,lsx=col-1;hxx<hsx&&lxx<lsx;hxx++,hsx--,lxx++,lsx--)
 {
    for(m1=lxx;m1<lsx;m1++)
 {
  printf("%d\n",sz[hxx][m1]);
 }
 for(m2=hxx;m2<hsx;m2++)
 {
  printf("%d\n",sz[m2][lsx]);
 }
 for(m3=lsx;m3>lxx;m3--)
 {
  printf("%d\n",sz[hsx][m3]);
 }
    for(m4=hsx;m4>hxx;m4--)                                                                     
 {
  printf("%d\n",sz[m4][lxx]);
 }
 }
 if(hxx==hsx)
 {
  for(n1=lxx;n1<=lsx;n1++)
  {
   printf("%d\n",sz[hxx][n1]);
  }
 }
 else if(lxx==lsx)
 {
  for(n2=hxx;n2<=hsx;n2++)
  {
   printf("%d\n",sz[n2][lxx]);
  }
 }
  return 0;
}