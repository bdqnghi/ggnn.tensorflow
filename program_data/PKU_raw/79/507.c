int ysf(int n,int m)
{
 int i,s=0;
 for(i=2;i<=n;i++)
  s=(s+m)%i;
 return(s+1);
}
main()
{
 int a[300][2];
 int i,x=0;
 do
  {
   scanf("%d %d",&a[x][0],&a[x][1]);
   x++;
  }
 while(a[x-1][0]!=0||a[x-1][1]!=0);
 for(i=0;i<x-1;i++)
  printf("%d\n",ysf(a[i][0],a[i][1]));
}

 
