int main()
{
  int a[1000],i=0,k,x=0,j;
  for(;;)
  {
      scanf("%d",&a[i]);
      i++;
  if(a[i-1]==-1)
  break;
  }
  for(k=0;k<i-1;k++)
  {
      for(j=k+1;j<i-1;j++)
      {
          if(a[k]==2*a[j]||a[j]==2*a[k])
          {
          x++;
          }
          if(a[j+1]==0)
          break;
      }
      if(a[k+2]==0||a[k+2]==-1)
      {
      k=k+2;
      printf("%d\n",x);
      x=0;
      }
  }
  return 0;
}
