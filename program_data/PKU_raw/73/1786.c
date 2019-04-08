int main()
{
  int i,j,n,a[5][5],max,t,q=0;
  for(i=0;i<5;i++)
   for(j=0;j<5;j++)
     scanf("%d",&a[i][j]);
  for(i=0;i<5;i++)
   {
     t=0;
     max=a[i][0];
     n=0;
     for(j=1;j<5;j++)
      if(a[i][j]>max)
        {
          max=a[i][j];
          n=j;
         }
     for(j=0;j<5;j++)
      if(max>a[j][n]) t++;
     if(t==0) {printf("%d %d %d",i+1,n+1,a[i][n]);q++;}
    }
  if(q==0) printf("not found");
    return 0;
}