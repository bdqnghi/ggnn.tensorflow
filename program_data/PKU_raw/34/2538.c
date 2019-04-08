main ()
{
     int a,b,c,d,e,f,g;
     scanf("%d",&a);
     if (a!=1)
     {
     while (a!=1)
     {
           if (a%2==0)
           {
                      b=a/2;
                      printf("%d/2=%d\n",a,b);
                      a=b;
           }
           else
           {
               b=a*3+1;
               printf("%d*3+1=%d\n",a,b);
               a=b; 
           }
     }
     }
     printf("End");
} 
                    

