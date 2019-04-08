
main()
{
      int a,b,c;
      scanf("%d",&a);
      while(a>=2)
      {
                     if(a%2==1)
                     {b=3*a+1;
                     printf("%d*3+1=%d\n",a,b);
                     c=b;a=c;a=b;
                     continue;
                     }
                     else 
                     {b=a/2;
                     printf("%d/2=%d\n",a,b);
                     c=b;a=c;a=b;
                     continue;}
                     }
                     
                     printf("End\n");
      
      }
