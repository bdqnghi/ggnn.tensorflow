main ()
{
   int n;
   scanf ("%d",&n);
   int a;
   int b;
   
   int i;
   if (n<=4)
   printf ("empty");
   else 
   {
   for (a=3;a<=(n-2);a++)
      {   
         for (i=2;i<=a;i++)
             {
                b=a+2;           
                if (a%i==0)
                break ;
                else if (b%i==0)
                break ;
                                 
                           
             }  
           if (i==a)
           printf ("%d %d\n",a,b);   
    
      }     
      }
     getchar ();
     getchar ();
     
     
  
     
}