int Compare(const void *elem1,const void *elem2)
      {
       return *((int *)(elem2)) - *((int *)(elem1));
       }
      
main()
{
      int n,i=0,j=0,counter=0,c=0,lose=0,k=0,l=0,m=0;
      int money[1000]={0};
      for(k=0;;k++)
      {
          scanf("%d",&n);
       if(n==0)
          {break;}
       else
       {
          
          int q[1000]={0};
          int t[1000]={0};
          for(i=0;i<n;i++)
          {
              scanf("%d",&t[i]);
          }
          
          for(i=0;i<n;i++)
          {
              scanf("%d",&q[i]);
          }
           qsort(t, n, sizeof(int), Compare);
           qsort(q, n, sizeof(int), Compare);
           m=0;
           for(j=0;n>0;j++)
           {
                   counter=0,c=0,lose=0;
                   for(i=0;(q[i]<t[i])&&(i<n);i++)
                   {
                       counter=counter+1;         /*??????counter????*/ 
                       
                   }
                   
                   for(i=0;i<=n-counter-1;i++)
                   {
                       q[i]=q[i+counter];       
                       t[i]=t[i+counter];
                   }
                   n=n-counter;
                   m=m+counter;
                   if(n==0)
                   break;
                   
                   for(i=n-1;q[i]<t[i];i--)
                   {
                       c++;                    /*??????c????*/ 
                   }
                   n=n-c;
                   m=m+c;
                   if(n==0)
                   break;
                   
                   if(q[0]>t[n-1])
                   {lose++;}                         /*?????*/ 
                   m=m-lose;
                   for(i=0;i<=n-1;i++)        
                   {
                       q[i]=q[i+1];                /*???????pass*/
                   }
                   
                                            
                   n=n-1;
            
            }
       
          money[k]=200*(m);               
          
          l++;
          
         }
          
       }
             
               for(k=0;k<l;k++)
                {
                printf("%d\n",money[k]);              /*??????????????*/
                }


}

