

int main (int argc, char *argv[])
{
  int n,m,i,j,t,l,x,y;
  int a,b;
  scanf("%d",&m);
  y=m/2;
  for(x=3;x<=y;x++)
  {
    n=2*x;
    for(i=n;x<=i;i--)
     {
      if(i%2!=0)
      {
       a=ceil((double)sqrt(i));
       for(j=2;j<=a;j++)
       {
        if(i%j==0)
        {
           break;
        }
        else
        {
            if(j==ceil(a))
            {
                  t=n-i;
                  b=ceil((double)sqrt(t));
                  for(l=2;l<=b;l++)
                  {
                     if(t%l==0)
                     {
                        break;
                     }
                     else
                     {
                       if(l==ceil(b))
                       {
                         printf("%d=%d+%d\n",n,t,i);
                         goto finish;
                       }
                     }
                  }
            }  
        }
       }
      }
     }finish: x;
  }
  return 0;
}
