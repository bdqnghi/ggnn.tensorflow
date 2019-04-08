int compare(const void*a1,const void*a2)
{
    int*p1,*p2;
    p1=(int*)a1;
    p2=(int*)a2;
    return(*p2)-(*p1);
}    
main()
{
      int k;
      for(k=1; ;k++)
      {
            int n,j,i,c=0,p=200,money,m;
            scanf("%d",&n);
            if(n==0) break;
            int*t=(int*)malloc(n*sizeof(int));
            int*q=(int*)malloc(n*sizeof(int));
            for(j=0;j<n;j++)
              {     scanf("%d",&t[j]);  }
             for(j=0;j<n;j++)     
                  
                  {scanf("%d",&q[j]);}
                  
             qsort(t,n,sizeof(int),compare);
             qsort(q,n,sizeof(int),compare);
             for(i=0;i<n;i++)
             {
                      if(t[i]>q[i])/*????*/ 
                      c++;
                      else
                      {
                          if(t[n-1]>q[n-1])/*??????????????????*/
                          {
                               c++;
                               for(j=n-2;j>=i;j--)
                                {t[j+1]=t[j];
                                q[j+1]=q[j];}
                           }     
                          else
                          {
                              if(t[n-1]<q[i])
                              {
                                             c--;
                                             for(j=n-2;j>=i;j--)
                                             t[j+1]=t[j];
                               } 
                          }                                
                       } 
                                       
                       money=c*p;
                       
              }
                       printf("%d\n",money);
                      
                      
}                   
                      
                      return(0);
                    
                       getchar();getchar();getchar();getchar();getchar();getchar();getchar();
                       
                       
}                       
                                             
                                           
                   
