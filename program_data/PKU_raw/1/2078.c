int shi(int a)
{
      int b=sqrt(a);
      for(int i=2;i<=b;i++)
      {
           if(a%i==0)return 0;
       }
      return 1;
}
int shu(int m,int k)
{
      int a=1;
      for(int j=k;j<=sqrt(m);j++)
     {
            if(m%j==0&&m/j>=k)
            {
                 a++;
                 if(shi(m/j)==0)a+=shu(m/j,j)-1;
            }
     }
     return a;
}
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
 {
     int m,a;
     scanf("%d",&m);
     printf("%d\n",shu(m,2));
 }
return 0;
}