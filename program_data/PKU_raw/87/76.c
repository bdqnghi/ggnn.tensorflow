int main()
{
   int a,b,c,d,e,f;
   int n=1;
   while(n)
   {
      scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
      n=a+b+c+d+e+f;
      if(n==0)
      {
         break;     
      }
      int s;
      s=(d+12-a)*3600-b*60+e*60-c+f;
      printf("%d\n",s);
      //scanf("%d",&a);
   }
   return 0; 
}
