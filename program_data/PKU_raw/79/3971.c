main()
{
     int n=1, m=1;
     while(n!=0 && m!=0)
     {
         int i,s=0;
         scanf("%d%d",&n,&m);
         if(n==0 && m==0) break;
         else
         {
             int *p,k,all;
             p=(int *)malloc(n*sizeof(int));
             for(i=0;i<n;i++) p[i]=i+1;
             k=0;
             for(i=1,all=0;;i++)
             {
                  if(i%m==0) {p[k]=0;all++;}
                  if(all==n-1) {for(i=0;i<n;i++) if(p[i]!=0) printf("%d\n",p[i]);break;}
                  do{k=(k+1)%n;}while(p[k]==0);
             }         
         }
     }
     
}
