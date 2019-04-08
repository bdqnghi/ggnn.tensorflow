main()
{
      for(;;)
      {
      int n;
      scanf("%d",&n);
      if(n==0)
      break;
      int a[n];//b???????a?????? 
      int b[n];
      int swap;
      for(int i=0;i<n;i++)
      scanf("%d",&b[i]);
      for(int i=0;i<n;i++)
      for(int j=i;j<n;j++)
      {
              if(b[i]>b[j])
              {
                           swap=b[i];
                           b[i]=b[j];
                           b[j]=swap;
              }
      }
      for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
      for(int i=0;i<n;i++)
      for(int j=i;j<n;j++)
      {
              if(a[i]>a[j])
              {
                           swap=a[i];
                           a[i]=a[j];
                           a[j]=swap;
              }
      }
      int *a1;
      int *a2;
      int *b1;
      int *b2;
      a1=&a[0];
      a2=&a[n-1];
      b1=&b[0];
      b2=&b[n-1];
      int count1=0,count0=0;
      for(;;) 
      {

             if(b1==b2+1)
            
            { break;}
             if(*(a1)<*(b1))
             {
                                  
                                  a1++;
                                  b1++;
                                  count1++;
             }
             else
             if(*a1>*b1)
             {
                 
                            
                             b1++;
                             a2--; 
     
             }
             else
             if(*a1==*b1)
             {
                    if(*a2<*b2)
                    {
                               a2--;
                               b2--;
                               count1++;
                               
                               
                    }
                    else if(*a2>*b2)
                    {
                                b1++;
                                a2--;
                                
                    }
                    else if(*a2==*b2)
                    {
                         if(*a2==*b1)
                         count0++;
                         a2--;b1++;
                         }
                    
             
             } 
            
             
           
                        /* if(*a2<*b2)
                         {
                                    count1++;
                                    a2--;
                                    b2--;
                         }
                         if(*a2>*b2)
                         {
                                a2--;
                         }
                         if(*a2==*b2)
                         {
                                     count2++;
                         }*/
             
      }
      printf("%d\n",(count1*200-(n-count0-count1)*200));
      }
}
  