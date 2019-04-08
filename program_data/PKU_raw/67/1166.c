int main()
{
    int a,b,n,i;
    double x,y;
    scanf("%d",&n);
    scanf("%d%d",&a,&b);
    x=(double)b/a;
    for(i=1;i<n;i++)
   {
      scanf("%d%d",&a,&b);
      y=(double)b/a;
      if(y-x>0.05)
      {
         printf("better");
         printf("\n");
      }
      else if(x-y>0.05)
     {
         printf("worse");
         printf("\n");
     }
     else
     {
         printf("same");
         printf("\n");
     }
   }
   return 0;
}

