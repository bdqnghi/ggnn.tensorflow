
struct couple 
{
       int x;
       int y;
};

int main(int argc, char *argv[])
{
  int n,i,j;
  scanf("%d",&n);
  struct couple line[n],temp;
  for (i=0;i<=n-1;i++)
      scanf("%d%d",&line[i].x,&line[i].y);
  int min=line[0].x,max=line[0].y;
  for (i=0;i<=n-1;i++)
  {
      if (line[i].x<min)
      min=line[i].x;
      if (line[i].y>max)
      max=line[i].y;
  }
  int a[max-min+1];
  for (i=0;i<=max-min;i++)
      a[i]=1;
  for (i=0;i<=n-1;i++)
  {
      for (j=line[i].x-min;j<=line[i].y-min-1;j++)
      a[j]=0;
  }
  int flag=1;
  for (i=0;i<=max-min-1;i++)
  {
      if (a[i]!=0)
      flag=0;
  }
  if (flag==0)
  printf("no");
  else
  printf("%d %d",min,max);         
  return 0;
}
