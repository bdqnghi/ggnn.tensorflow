int n[300];
int main(void)
{
      int ctr,i=1;
      int max=0,temp;
      scanf("%d",n);
      while((getchar())==',')
      {
      scanf("%d",&n[i]);
      i++;
      }
      for(ctr=0;ctr<i;ctr++)
      {
      if(n[ctr]>max)
      max=n[ctr];
      }
      temp=max;
      max=0;
      for(ctr=0;ctr<i;ctr++)
      {
      if(n[ctr]==temp)
      n[ctr]=0;
      }
      for(ctr=0;ctr<i;ctr++)
      {
      if(n[ctr]>max)
      max=n[ctr];
      }
      if(max==0)
      printf("No");
      else
      printf("%d",max);
      return 0;
}