
main()
{
      int n,a,b,i,c[10000],d[10000],t;
      scanf ("%d",&n);
      for (i=0;i<n;i++)
      c[i]=0;
      d[i]=0;
      scanf ("%d %d",&a,&b);
      for (;(a!=0)||(b!=0);)
      {    
           c[b]=c[b]+1;
           d[a]=d[a]+1;
           scanf ("%d %d",&a,&b);
      }
      t=0;
      for(i=0;i<n;i++)
      {
           if ((c[i]==(n-1))&&(d[i]==0))
           {  
              printf("%d",i);
              t=1;
           }
           if (t==1)  break;
      }
      if (t==0)  printf("NOT FOUND"); 
                
      

}              
              
