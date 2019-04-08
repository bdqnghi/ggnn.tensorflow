main()
{
   int i,j,a[5][5],x[5]={0},y[5],b[5],c[5],k=0;
   for(i=0;i<5;i++)
     for(j=0;j<5;j++)
       scanf("%d",&a[i][j]);
   for(i=0;i<5;i++)
     for(j=0;j<5;j++)
       {
          if(x[i]<a[i][j])
          {
             x[i]=a[i][j];
             b[i]=j;               
          }              
       }
   for(j=0;j<5;j++) 
   {  
      y[j]=a[0][j];
      for(i=0;i<5;i++)
     {
        if(y[j]>a[i][j])
          {
             y[j]=a[i][j];             
          }                
     } 
   } 
   for(i=0;i<5;i++)
      if(x[i]==y[b[i]])
      {
        k++;
        printf("%d %d %d",i+1,b[i]+1,x[i]);
      }
   if(k==0)
     printf("not found");
      
     
getchar();getchar();getchar();getchar();        
}
