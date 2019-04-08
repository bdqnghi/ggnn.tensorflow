
int main()
{
  int isprime(int n);
  int m,i;
  scanf("%d",&m);
  for (i=3;i<=(m/2);i+=2)
  {
     if(isprime(i)&&isprime(m-i))
       printf("%d %d\n",i,m-i);
  }
  
}
int isprime(int n)
{
   int i;
   for (i=2;i*i<=n;i++)
     if (n%i==0)
       return 0;
   return 1;
}
