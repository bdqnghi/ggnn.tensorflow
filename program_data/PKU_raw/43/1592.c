  main()  {
     int i,j=0,n,k=1,t,m;
   scanf("%d",&m);
     int a[m];
      for(n=3;n<=m;n+=2)
  {    t=sqrt(n);i=2;
          for(i=2;;i++)
        { if(n%i==0) break;
        if(i>t)  { a[j]=n;j++;break; }}

     }
  t=0;
       for(i=0;i<=j;i++)
           for(k=i;k<=j;k++)
              {     if(a[i]+a[k]==m)
                        { t++; 
                          printf("%d %d\n",a[i],a[k]);
                              }  
                    }
                    if(t==0) 
                    printf("no\n"); 
               }
