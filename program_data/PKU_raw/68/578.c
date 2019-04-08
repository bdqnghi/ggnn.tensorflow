int prime[50000];
inline int isprime(int n)
{
  int i;
  if (prime[n]!=-1)return prime[n];
  else
    {
      for (i=2;i<=n/2;i++)
        {
          if ((n%i==0))
            {prime[n]=0;return 0;}
        }
      prime[n]=1;return 1;
    }
}

int main ()
{
  int n,i,k;

  for (i=2;i<50000;i++)prime[i]=-1;
  prime[2]=1;
  scanf("%d",&n);
  for (k=6;k<=n;k=k+2)
    {
      for (i=2;i<=k/2;i++)
        {
          if (isprime(i))
            {
              if (isprime(k-i))
                {
                  printf("%d=%d+%d\n",k,i,k-i);
                  break;
                }
            }
        }
    }
  return 0;
}
