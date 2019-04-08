
int pd(int);
main()
{
   int m,count,i;
   scanf("%d",&m);
   for(count=6;count<=m;count=count+2){
      i=2;
      if(i==2&&pd(count-2)){
          printf("%d=2+%d\n",count,count-2);
          break;
      } 
      else
         for(i=3;i<=count/2+1;i=i+2){
            if(pd(i)&&pd(count-i)){
               printf("%d=%d+%d\n",count,i,count-i);
               break;
            }    
         }
   }
   return 0;
}

int pd(int x)
{
   int i;
   for(i=2;i<=sqrt(x)+1;i++){
      if(x%i==0)
         return 0;
   }
   return 1;
}