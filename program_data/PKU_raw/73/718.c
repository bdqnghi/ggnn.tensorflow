main()
{
      int i,j,k,max,maxj,f;
      int a[5][5];
      for(i=0;i<5;i++)
       for(j=0;j<5;j++)
        scanf("%d",&a[i][j]);
      for(i=0;i<5;i++)
      {
         max=a[i][0];
         k=0;
         maxj=1;
         for(j=0;j<5;j++)
         {
           if(a[i][j]>max)
           {
              max=a[i][j];
              k=j;
           }
         }
         for(f=0;f<5;f++)
         {
           if(max>a[f][k])
           {
             maxj=0;
             break;
           }
         }
         if(maxj==1)
         {
                    printf("%d %d %d\n",i+1,k+1,max); 
                    break;
         }
      }
      if(maxj==0)
        printf("not found");              
}