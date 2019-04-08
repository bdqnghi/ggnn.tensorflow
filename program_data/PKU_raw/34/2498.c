int main()
{
 int x;
 scanf("%d",&x);
 while (x%2==0)
 {
     x=x/2;
     printf("%d/2=%d\n",x*2,x);
     while (x%2!=0 && x!=1)
     {
         x=x*3+1;
         printf("%d*3+1=%d\n",(x-1)/3,x); 
         }
     } 
 
 while (x%2!=0 && x!=1)
 {
       x=x*3+1;
       printf("%d*3+1=%d\n",(x-1)/3,x);
       while (x%2==0)
       {
             x=x/2;
             printf("%d/2=%d\n",x*2,x); 
             } 
       }
 if (x==1) printf("End\n"); 
 
}
