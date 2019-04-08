
int  cal(int y,int x)
{
   int i,sum;  
   if (x==1) return 1;
   else 
   {
      sum=0;  
      for (i=y;i<=x;i++)
      {
      if ((x%i==0)&&((x/i==1)||(x/i>y))) sum+=cal(i,x/i);
      
      }
      return sum;
   }
}
int main()
{
    int n,i,l;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
     scanf("%d",&l);   
    printf("%d",cal(2,l));
    if (i!=n) printf("\n");
    }
    
    return 0;
}        
