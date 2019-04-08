int sushu(int n)
{
    int i;
    double a;
  if (n==1)
  return 0;
  else if(n==2)
  return 1;
  else 
  {    a=sqrt(n);
       for(i=2;i<=a;i++)
       {
        if(n%i==0)
        return 0;
       }
       return 1;
  }
}
 int main()
  {
    int n,i;
    scanf("%d",&n);
    if(n<5)
    printf("empty");
    else
    {
      for(i=1;i<=n-2;i++)
    {
     if(sushu(i)==1&&sushu(i+2)==1)
     printf("%d %d\n",i,i+2);
     }
     }

     return 0;
     }
    
                        
 
 
 
 