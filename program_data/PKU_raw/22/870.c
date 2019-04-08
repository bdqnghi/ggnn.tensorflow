int main()
{
   int n,a=0,b=-1,i=0;
   char c=',';
   while(c==',')
   {
      scanf("%d%c",&n,&c);
      if(n>a)
      {
         b=a;
         a=n;
         }
      else if(b<=n&&n<a)
         b=n;
      i++;
   }  
   if(i==1||b==-1||b==0)
      printf("No");
   else 
      printf("%d",b);
    scanf("%d%c",&n,&c);
    return 0;   
}
