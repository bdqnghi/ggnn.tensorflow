
int main()
{
  int a[16],i,j,r,k;
  while(1)
  {
      scanf("%d",&a[0]);
      if(a[0]==-1)
      {
          break;
      }
      r=0;i=0;
      while(a[i]!=0)
      {
          i++;
          scanf("%d",&a[i]);
      }
      for(k=0;k<i;k++)
      {
          for(j=0;j<i;j++)
          {
              if(a[j]==2*a[k])
              {
                  r++;
              }
          }
      }
      printf("%d\n",r);
  }


    return 0;
}
