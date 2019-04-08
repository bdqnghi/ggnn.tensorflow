
int main(int argc, char *argv[])
{
  int m,i,j,flag1,flag2;
  scanf("%d",&m);
  for (i=3;i<=m/2;i+=2)
  {
      flag1=1;
      flag2=1;
      for (j=2;j<=i-1;j++)
      {
          if (i%j==0)
          {flag1=0;break;}
      }
      for (j=2;j<=m-i-1;j++)
      {
          if ((m-i)%j==0)
          {flag2=0;break;}
      }
      if ((flag1==1)&&(flag2==1))
      printf("%d %d\n",i,m-i);
  }
	
  return 0;
}
