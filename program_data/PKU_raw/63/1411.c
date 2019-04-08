
main ()
{
     int m,n,s,t;
     int a[1000][1000];
     int b[1000][1000];
     int c[1000][1000];
      
     
     scanf("%d %d",&m,&n);
     for (int i=1;i<=m;i++)
       {for(int j=1;j<=n;j++) 
             {
                     scanf("%d",&a[i][j]); 
             }  
       } //????????? 
       
       
       
     scanf("%d %d",&s,&t);
     for (int i=1;i<=s;i++)
       {for(int j=1;j<=t;j++) 
             {
                     scanf("%d",&b[i][j]); 
             }  
       } //????????? 
  

     
       for(int x=1;x<=m;x++)
         {
                for(int y=1;y<=t;y++)
                {       c[x][y]=0; 
                        for(int i=1;i<=n;i++) 
                       { c[x][y]+= a[x][i]*b[i][y];  } 
                        
                        if(y==1)printf("%d",c[x][y]); 
                        if(y>1)printf(" %d",c[x][y]); 
                }
         if(x<m)printf("\n"); 

         } 
         
         
 
} 
