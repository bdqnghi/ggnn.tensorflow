int main()
{
   int m,i,max,second=0;
   scanf("%d",&m);
   max=m;
   i=0;
   while(i<300)
   {
                      scanf(",%d",&m);
                      if(m>max){ 
                      second=max;
                      max=m;}
                      else if(m<max&&m>second) 
                      second=m;
					  i=i+1;
   }
   if(second==0)
   printf("No");
   else
   printf("%d\n",second);
   return 0;
}
