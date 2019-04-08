/*?????????*/
void main()
  {
     int n,m,k,i,j,s,t;
     scanf("%d %d",&n,&k);
     t=n-1;s=0;
     for(j=1;s<n;j++)
       {
          s=0;
          m=j*t;
          for(i=1;i<=n;i++)
               if(m%(n-1)==0) {m=m/(n-1)*n+k;s=s+1;}
       }
     printf("%d\n",m);
   }
