void main()
{
 int zhh(int n,int m);
 int a[5][5],i,j,m,n,c;
 for(i=0;i<=4;i++)
 {
  for(j=0;j<=4;j++)
   scanf("%d",&a[i][j]);
 }
 scanf("%d %d",&n,&m);
 if(zhh(n,m)==0)
  printf("error");
 else  
 {	 for(i=0;i<=4;i++)
 {
   if(i==m)i=n;
  else if(i==n)i=m;
  for(j=0;j<=4;j++)
  {
	  if(j<4)
  printf ("%d ",a[i][j]);
	  else printf("%d",a[i][j]);
  if(j==4)printf("\n");
  }
  if(i==n)i=m;
  else if(i==m)i=n;
 }
}
}


int zhh(int n,int m)
{
 if(n>4||m>4)
  return(0);
 else 
  return(1);
 }
