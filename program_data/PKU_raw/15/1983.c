int main()
{
  int n,i,j,an[500][500],a,b,c,d,e=0,f=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
       scanf("%d",&an[i][j]);
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
       if(an[i][j]==0)
       {
          a=i;
          b=j;
          e=1;
          break;
       }
    }
    if(e==1)
    break;
  }
  for(i=n-1;i>=0;i--)
  {
    for(j=n-1;j>=0;j--)
    {
        if(an[i][j]==0)
        {
           c=i;
           d=j;
           f=1;
           break;
        }
    }
    if(f==1)
    break;
  } 
  int s;
  s=(c-a-1)*(d-b-1);
  printf("%d",s);
  return 0;
}