
int main(int argc, char *argv[])
{
  int m,a[100],i,j;
  float nume[100],deno[100];
  float sum;
  scanf("%d",&m);
  for (i=0;i<=m-1;i++)
  {
      scanf("%d",&a[i]);
      nume[0]=2;deno[0]=1;
      for (j=1;j<=a[i]-1;j++)
      {
          nume[j]=nume[j-1]+deno[j-1];
          deno[j]=nume[j-1];
      }
      sum=0;
      for (j=0;j<=a[i]-1;j++)
      {
          sum=sum+nume[j]/deno[j];
      }
      printf("%.3f\n",sum);
  }	
  return 0;
}
