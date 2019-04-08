main()
{
      int k,i,j,t=0,max=0;
      int m[25];
      int n[25];
      scanf("%d\n",&k);
            
      for(i=0;i<k;i++)
          scanf("%d",&m[i]); 
             
      for(i=0;i<k;i++)
          n[i]=0;
      n[k-1]=1;
      for(i=k-2;i>=0;i--)
      {
          for(j=k-1;j>i;j--)
          {
               if(m[i]>=m[j])
               {                     
                     if(n[i]<=n[j])
                     {
                           n[i]=n[j]+1;                                                         
                     }
                     t++;                                  
               } 
                                       
          }
          if(t==0)
               n[i]=1; 
          t=0;                    
      }
      for(i=0;i<k;i++)
      {
           if(n[i]>max)
              max=n[i];           
      }         
      printf("%d",max);
      
}
