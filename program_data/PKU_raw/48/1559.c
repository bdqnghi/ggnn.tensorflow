main ()
{
       int m,n;
  int a[10][10]={0};
  int b[10][10]={0};
  scanf ("%d%d",&m,&n);
  a[4][4]=m;
  int i=0,j=0,k ;
  int x,y;
  for (k=0;k<n;k++)
  {
    for (i=0;i<9;i++)
      {
         for (j=0;j<9;j++)
          {
            b[i][j]=a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
          }
         
      }  
    for (i=0;i<9;i++)  
        {
          for (j=0;j<9;j++)
           {
                           a[i][j]=a[i][j]+b[i][j];
            }
        }
      
          
  }

    for (x=0;x<9;x++)
      {
        for (y=0;y<9;y++)
        {   
            if (a[x][y]>0) 
            {
                if (y<8)                       
                printf ("%d ",a[x][y]);
               else  
               printf ("%d",a[x][y]);
            }
            else 
            if (y<8)                       
                printf ("0 ",a[x][y]);
               else  
               printf ("0",a[x][y]);
           
        }
         printf ("\n");
      }


getchar ();getchar ();


}
