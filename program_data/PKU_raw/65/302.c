

main()
{
      int n,i,a=0,b=0;
      int p[200],q[200];
      scanf("%d",&n);
      
      for(i=0;i<n;i++)
      {
              scanf("%d%d",&p[i],&q[i]);
              if(p[i]!=q[i])
              {
                if(p[i]==0)
                  {
                      if(q[i]==1)
                        a=a+1;
                      else 
                        b=b+1;
                      }
                  
                else if(p[i]==1)
                   {
                           if(q[i]==0)
                              b=b+1;
                           else 
                              a=a+1;
                   }
                   else
                   {
                       if(q[i]==0)
                          a=a+1;
                       else 
                         b=b+1;
                   }
                }
                     
                  
              
      }
      

      if(a>b)
         printf("A\n");
      else if(a<b)
             printf("B\n");
           else
             printf("Tie");
                   
}
