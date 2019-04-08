int main()
{
   int m,i,j,flag=0;
   scanf("%d",&m);
   for (i=3;i<=m/2;i+=2)
 {
      {
        for (j=3;j<=sqrt(i);j+=2)
        if (i%j==0) flag=1;
        for (j=3;j<=sqrt(m-i);j+=2)
        if ((m-i)%j==0) flag=1;
      }
      if (flag==0) printf("%d %d\n",i,m-i);
      flag=0;
 }
   return 0;
}