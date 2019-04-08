
int oddoreven(int a);
main()
{
      int a,b;
      scanf("%d",&a);
      for(a;;)
      {
           if(oddoreven(a)==1)
           {   b=a/2;
               if(b==1)
               {  printf("2/2=1\n");
                  printf("End");
                  break;
               }
               else
               {  printf("%d/2=%d\n",a,b);
                  a=b;
               }
           }
           else
           { if(a==1)
             {  printf("End");
                break;
             }
             else   
             {  b=3*a+1;
                printf("%d*3+1=%d\n",a,b);
                a=b;
             } 
           }
                 
      }
     
}
int oddoreven(int a)
{
    if(a%2==0)
      return(1);
    else
      return(0);
} 
