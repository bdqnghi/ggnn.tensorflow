main()
{
      int a[5][5];
      int x[5]={0};
      int y[5]={0};
      int i,j,k=0;
      for(i=0;i<5;i++)
      {
        for(j=0;j<5;j++)
        {
           scanf("%d",&a[i][j]);
        } 
      }
      for(i=0;i<5;i++)
      {
        int max=a[i][0];
        for(j=0;j<5;j++)
        {
           if(a[i][j]>max)
           {
             max=a[i][j];
             x[i]=j;
           }   
        } 
      }
      for(j=0;j<5;j++)
      {
        int min=a[0][j];
        for(i=0;i<5;i++)
        {
           if(a[i][j]<=min)
           {
             min=a[i][j];
             y[j]=i;
           } 
        } 
      }
      for(i=0;i<5;i++)
      {
        if(y[x[i]]==i)
        {
          k++;
          printf("%d %d %d\n",i+1,x[i]+1,a[i][x[i]]);
        } 
      }
      if(k==0)                                  
      printf("not found");

}