
int main(int argc, char *argv[])
{
  int i,j,k=1,n;
  int b[100]={0};
  scanf("%d",&n);
  b[99]=1;
  for(i=0;i<n;i++)
  {
      for(j=99;j>=0;j--)
      b[j]=b[j]*2;
      
      for(j=99;j>=0;j--)
      {
            if(b[j]>9)
            {b[j]=b[j]-10;
            b[j-1]++;}
      }
  }
  for(i=0;i<100;i++)
  {
      if(b[i]>0)
      break;
  }
  for(j=i;j<100;j++)
  printf("%d",b[j]);
  return 0;
}
