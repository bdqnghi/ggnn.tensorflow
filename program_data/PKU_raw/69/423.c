
int main()
{
      int la,lb,l,i,j,k,t;
      int a[1000],b[1000],c[1000];
      char stra[1000],strb[1000];
       
      scanf("%s%s",stra,strb);
      
      la=strlen(stra);
      lb=strlen(strb);
      
      
      for (i=0;i<=1000;i++)
       b[i]=0;
       for (i=0;i<=1000;i++)
       c[i]=0;
       
      
      if (la==lb)
      {   for (i=la-1;i>=0;i--)
            {    
                  a[i]=stra[i]+strb[i]+b[i+1];
                       
                  if (a[i]>=(106))
                  {   a[i]=a[i]-10;
                      
                      b[i]=1;         
                          
                  }
                  
                    
                  
            }
            t=0;
            i=0;
            while (a[i]==2*'0')
            {     i=i+1;
            t=t+1;
                  
                  
                  }
            
            
            
           
            if(b[0]==1)
            printf("%d",1);
            for (i=t;i<la;i++)
            {printf("%d",a[i]-2*'0');}
            
      }
        if(la<lb)
      {        l=lb-la;
           
          
           
            for (i=la-1;i>=0;i--)
            {    
                  a[i]=stra[i]+strb[i+l]+b[i+1];
                       
                  if (a[i]>=(106))
                  {   a[i]=a[i]-10;
                      
                      b[i]=1;         
                     
                               
                  }
                  
                    
                  
            }
            
            if (b[0]==0)
            { 
                        
               t=0;
               i=0;
            while (strb[i]=='0')
            {     i=i+1;
            t=t+1;
                  
                  
                  }         
                   
             for(i=t;i<l;i++)
            {printf("%d",strb[i]-'0');}}
            else
            {    
                 c[l]=1;
                
                for (i=l-1;i>=0;i--)
                 {  
                     
                     strb[i]=strb[i]+c[i+1];
                                    
                                    
                    if (strb[i]>=(58))
                  {   strb[i]=strb[i]-10;
                      
                      c[i]=1;         
                               
                  }
                     
                 }
                  
                  t=0;
                  i=0;
                  while (strb[i]==2*'0')
                  {     i=i+1;
                        t=t+1;
                  }
                 if (c[0]==1)
                 printf("%d",1);
                 for(i=t;i<l;i++)
                 printf("%d",strb[i]-'0');               
                
            }
             for (i=0;i<la;i++)
            {printf("%d",a[i]-2*'0');}
            
      }
        
     
    
       if(lb<la)
      {        l=la-lb;
           
          
           
            for (i=lb-1;i>=0;i--)
            {    
                  a[i]=strb[i]+stra[i+l]+b[i+1];
                       
                  if (a[i]>=(106))
                  {   a[i]=a[i]-10;
                      
                      b[i]=1;         
                     
                               
                  }
                  
                    
                  
            }
            if (b[0]==0)
            {     t=0;
               i=0;
            while (stra[i]=='0')
            {     i=i+1;
               t=t+1;}
                        
             for(i=t;i<l;i++)
            {printf("%d",stra[i]-'0');}}
            else
            {    
                 c[l]=1;
                
                for (i=l-1;i>=0;i--)
                 {  
                     
                     stra[i]=stra[i]+c[i+1];
                                    
                                    
                    if (stra[i]>=(58))
                  {   stra[i]=stra[i]-10;
                      
                      c[i]=1;         
                               
                  }
                     
                 }
                 
                 if (c[0]==1)
                 printf("%d",1);
                 for(i=0;i<l;i++)
                 printf("%d",stra[i]-'0');               
                
            }
             for (i=0;i<lb;i++)
            {printf("%d",a[i]-2*'0');}
            
      }
        
    
    
    
    if((la==1)&&(lb==1)&&(stra[0]=='0')&&(strb[0]=='0'))
    printf("%d",0);
    
    
    
    
   
    return 0;
}

