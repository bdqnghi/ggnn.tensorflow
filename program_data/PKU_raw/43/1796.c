int zhishu(int n)
{
    int m,d,i;
m=(int)sqrt(n);
for(i=2;i<=m;i++)
{ if(n%i==0)
   break;}
if(i==m+1)
   d=1;
   else
   d=0;
   return(d);
}
main()
{
      int p,m;
      scanf("%d",&m);
      for(p=3;p<=m/2;p++)
      {if((zhishu(p)==1)&&(zhishu(m-p)==1))
      printf("%d %d\n",p,m-p);}
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();
      }
      
      
      
