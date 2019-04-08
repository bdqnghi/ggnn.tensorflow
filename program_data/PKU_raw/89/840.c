main()
{
    int a[10000];
    int b[10000];
    int m,n,i,j,t,p=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
     {
         a[i]=0;
         b[i]=0;
     }
     for(;;)
      {
          scanf("%d %d",&m,&n);
          if(m==0&&n==0)
          break;
          a[m]=a[m]+1;
          b[n]=b[n]+1;
      }
      for(j=0;j<t;j++)
       {
           if((a[j]==0)&&(b[j]==t-1))
            {
                 p=p+1;
                 printf("%d",j);
            }

       }
       if(p==0)
       printf("NOT FOUND");


}
