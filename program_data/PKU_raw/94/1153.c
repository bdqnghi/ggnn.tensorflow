
int main(int argc, char *argv[])
{
  int number[500],odd[500],n,i,j,t;
  scanf("%d",&n);
  for (i=0;i<=499;i++)
      odd[i]=0;
  for (i=0;i<=n-1;i++)
  {
      scanf("%d",number+i);
      if (number[i]%2!=0)
         odd[i]=number[i];
  }
  for (i=0;i<=499;i++)
  {
      for (j=i+1;j<=499;j++)
      {
          if (odd[i]>odd[j])
          {t=odd[i];odd[i]=odd[j];odd[j]=t;}
      }
  }
  for (i=1;i<=498;i++)
  {
      if (odd[i]!=0)
      printf("%d,",odd[i]);
  }
  printf("%d",odd[499]);
  return 0;
}
