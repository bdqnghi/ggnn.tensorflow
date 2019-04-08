int main()
{
   int i,j,m,n,s,a,b,c,d,e,f;
   while(1)
   {
       scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
       if(a==0)
       break;
       else
       {
         m=a*3600+b*60+c;
         n=(d+12)*3600+e*60+f;
         printf("%d\n",n-m);
       }
  }
   return 0;
}