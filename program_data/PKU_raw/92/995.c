main()
{
  int a[2000],b[2000],n,i,x=0;
  int k,j,m=0,count=0,order1,order2,s1=1,s2=1,s;
  for(s=1;s<=50;s++) 
{   scanf("%d",&n);
        if(n==0) 
        break;
        else  
       {  for(i=1;i<=n;i++)
              scanf("%d",&a[i]);       
         for(i=1;i<=n;i++)
              scanf("%d",&b[i]);
            
            
                                           for(k=1;k<=n-1;k++)    
                                             for(j=1;j<=n-k;j++)
                                                 {
                                                 if(a[k]>=a[k+j]);
                                                 
                                                 else if(a[k]<a[k+j])
                                                    {
                                                    m=a[k];
                                                    a[k]=a[k+j];
                                                    a[k+j]=m;                           
                                                    }
                                                 }
                                                for(k=1;k<=n-1;k++)     
                                             for(j=1;j<=n-k;j++)
                                                 {
                                                 if(b[k]>=b[k+j]);
                                                 
                                                 else if(b[k]<b[k+j])
                                                    {
                                                    m=b[k];
                                                    b[k]=b[k+j];
                                                    b[k+j]=m;                           
                                                    }
                                                 }
        order1=n;
        order2=n;
       for(i=1;;i++)
           {
                     if(count==n)
                         break;
                       if(a[s1]>b[s2])
                             {
                             x=x+200;
                             s1++;
                             s2++;
                             count++;
                             continue;
                             }
                       else if(a[s1]<=b[s2])             
                             {
                                      if(a[order1]>b[order2])
                                         {
                                         order1--;
                                         order2--;
                                         count++;
                                         x=x+200;
                                         continue;
                                         }                                                                          
                                      else if(a[s1]==b[s2]&&a[order1]==b[order2]&&a[s1]==a[order1]) 
                                         break;
                                      else if(a[order1]<=b[order2])
                                         {
                                          s2++;
                                          order1--;
                                          count++;                                                 
                                          x=x-200; 
                                          continue;                                           
                                         }  
                                      
                           }        
                 
          }
    

       printf("%d\n",x);
       x=0;
       count=0;
       m=0;
       s1=1;
       s2=1;
   }   
     
      
}      
}