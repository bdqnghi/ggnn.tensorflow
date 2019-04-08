
int main()
{
  int n,i,a;
  int max=0,min=0,temp=0;
  
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
    scanf("%d",&a);
    if(i<=1)
    { 
           
      max=max>a?max:a;
      
     }
    if(max<a&&i>1)
    {
     min=max;
     max=a;
    }
    if(max>a&&min<a&&i>1)
    min=a;
    
   }
   printf("%d\n%d",max,min);
  
   return 0;
}
