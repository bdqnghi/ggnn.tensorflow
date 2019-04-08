int compare(const void * elem1,const void * elem2)
{
    int *p1,*p2;
    p1=(int*)elem1;
    p2=(int*)elem2;
    return (*p2)-(*p1);
}
main()
{
      int c;
      for(c=1;;c++)
      {
          int n;
          scanf("%d",&n);
          if (n==0)
              break;
          else     
          {    
              int d,match,f1=0,f2=0,b1=0,b2=0,money,w=0,t=0,l=0; 
              int T[n],Q[n];
              for(d=0;d<n;d++)
              {
                  scanf("%d",&T[d]);
              }
              qsort(T,n,sizeof(int),compare);
              for(d=0;d<n;d++)
              {
                  scanf("%d",&Q[d]);
              }
              qsort(Q,n,sizeof(int),compare);
              for(match=0;match<n;match++)
              {
                  if(T[f1]>Q[f2])
                  {
                        w++;                 
                        f2++;
                        f1++;
                  }
                  else 
                  {
                       if(T[n-1-b1]>Q[n-1-b2])
                       {
                             w++;
                             b1++;
                             b2++;
                       }
                       else
                       {    
                             if(T[n-1-b1]==Q[f2])
                                  break;
                             else 
                             {
                                 l++;
                                 b1++;
                                 f2++;
                             }
                       } 
                  }
              }
              money=200*(w-l);
              printf("%d\n",money);
          }
      }
}