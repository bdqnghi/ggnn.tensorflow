int compare  (const void *elem1,const void *elem2)
{     return ((*(int*)elem2)-(*(int*)elem1));
    
}



int main()
{
      int i,j,k,m,n,a[100000],b[100000];
      
      int ab,bb,ae,be,w,f;
      n=1;
       while(n!=0)
     
     {   scanf("%d",&n);
         if(n==0)
         break;
         
         for (i=0;i<n;i++)                               /*????*/
         scanf("%d",&a[i]);
         
         for (i=0;i<n;i++)
          scanf("%d",&b[i]);
        
        qsort(a,n,sizeof(a[0]),compare);                /*??*/ 
        qsort(b,n,sizeof(b[0]),compare);
        
       
         
        ab=0;
        bb=0;                                             /*?????*/
        ae=n-1;
        be=n-1;
        w=0;
        f=0;
        
            while(ab<=ae)
        {    if(a[ae]<b[be])
              {     f++;
                    ae--;
                    bb++;
              }
              else
              {
                     if(a[ae]>b[be])
                     {
                              w++;
                              ae--;
                              be--;
                     }
                     else
                     {    
                          if(a[ab]>b[bb])
                          {
                            w++;
                            ab++;
                            bb++;       
                                   
                          }
                          else
                          {  
                              if(a[ab]<b[bb])
                              {   f++;
                                  ae--;
                                  bb++;
                                       
                                       
                                       
                              }
                              else
                              {   
                                  if(a[ae]<b[bb])
                                  {f++;
                                  ae--;
                                  bb++;}
                                  else
                                  {
                                    ae--;
                                    bb++;  
                                  }
                                  
                                  
                                  
                              }
                              
                              
                              
                              
                          }
                          
                          
                          
                          
                     }
              
              
              
              
              
              }
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
        }
        
     
        
     
    /* for(i=0;i<n;i++)
     printf("%d ",a[i]);
     printf("\n");
      for(i=0;i<n;i++)
     printf("%d ",b[i]);*/
     
     printf("%d\n",200*(w-f));
     
     
     
     
     
     
     
     
     }
    
    
    
    
    
    
    
    
    
    
    
   
    return 0;
    
}
