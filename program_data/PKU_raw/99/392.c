int main()
{
  int n;
  int i,j,age[100];
  double percent[3],sum[3];
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&age[i]);
  }
  sum[0]=0;sum[1]=0;sum[2]=0;sum[3]=0;
  for(j=0;j<n;j++)
  {
    if(age[j]<=18)
    {
      sum[0]+=1;
      percent[0]=sum[0]/n*100;
    }
    if((19<=age[j])&&(age[j]<=35))
    {
      sum[1]+=1;
      percent[1]=sum[1]/n*100;
    }
    if((36<=age[j])&&(age[j]<=60))
    {
      sum[2]+=1;
      percent[2]=sum[2]/n*100;
    }
  }
  percent[3]=100-percent[0]-percent[1]-percent[2];
  printf("1-18:");
  printf(" %.2lf%\n",percent[0]);
  printf("19-35:");
  printf(" %.2lf%\n",percent[1]);
  printf("36-60:");
  printf(" %.2lf%\n",percent[2]);
  printf("60??:");
  printf(" %.2lf%\n",percent[3]);
  return 0;
}
