void main()
{
 int n,i,j;
 scanf("%d",&n);
 char a[n][30];
 int b[n][3];
 char c[n][2];
 for(i=0;i<n;i++)
  {
   scanf("%s %d %d %c %c %d",&a[i],&b[i][0],&b[i][1],&c[i][0],&c[i][1],&b[i][2]);
   }
 int sum[n];
 for(i=0;i<n;i++)
  {
    sum[i]=0;
    if (b[i][0]>80&&b[i][2]>0) sum[i]=sum[i]+8000;
    if (b[i][0]>85&&b[i][1]>80) sum[i]=sum[i]+4000;
    if (b[i][0]>90) sum[i]=sum[i]+2000;
    if (b[i][0]>85&&c[i][1]=='Y') sum[i]=sum[i]+1000;
    if (b[i][1]>80&&c[i][0]=='Y') sum[i]=sum[i]+850; 
   }
   int max=sum[0],t,total=0;
   char name[10];
   for(i=0;i<n;i++)
      {
        if (max<sum[i]) {max=sum[i];t=i;}
       }
      for(i=0;i<n;i++)
     {
       total=total+sum[i];
      }
      printf("%s\n%d\n%d",a[t],max,total);
}