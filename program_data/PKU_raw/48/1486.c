main()
{
  int h,l,i,m,n,j,y;
  int a[11][11],b[11][11];
  scanf("%d %d",&m,&n);
  for(h=0;h<11;h++)
  {
    for(l=0;l<11;l++)                
     {
       a[h][l]=0;
       b[h][l]=0;                             
                                    
     }             
  }      
 a[5][5]=m;
   b[5][5]=m;
  // printf("%d %d\n",a[4][4],b[4][4]);
for(i=0;i<n;i++)
{
  for(y=0;y<=n;y++)
  {
    for(j=0;j<=n;j++)                
     {
      /// if((4-y==4-n)&&(4-j==4-n))
       {a[5-y][5-j]=2*b[5-y][5-j]+b[4-y][4-j]+b[4-y][5-j]+b[4-y][6-j]+b[5-y][4-j]+b[5-y][6-j]+b[6-y][4-j]+b[6-y][5-j]+b[6-y][6-j];
       
      // b[h][l]=a[h][l];
      // printf("%d %d\n",y,j);
      //printf("a=%d+%d+%d+%d+%d+%d+%d+%d+%d\n",2*b[4-y][4-j],b[3-y][3-j],b[3-y][4-j],b[3-y][5-j],b[4-y][3-j],b[4-y][5-j],b[5-y][3-j],b[5-y][4-j],b[5-y][5-j]);
       
        }
      a[5+y][5+j]=a[5-y][5-j];
       a[5-y][5+j]=a[5-y][5-j];
       a[5+y][5-j]=a[5-y][5-j];
           
     /* else
      { if(j==0&&y==0)  
       { a[4][4]=2*b[4][4]+8*b[3][3] ;
        //b[4][4]= a[4][4];
        }
       else
       {
         a[4-y][4-j]=2*b[4-y][4-j]+2*b[4-y][4]+b[4][4]+b[4-y][4-j];  
       } 
      // break;
      } */         
     }             
  }
  for(h=0;h<11;h++)
  {
    for(l=0;l<11;l++)                
     {
      
       b[h][l]= a[h][l];;                             
                                    
     }             
  }          
}
       
for(h=1;h<10;h++)
  {
    for(l=1;l<10;l++)                
     {
        if(l!=9)                             
        {printf("%d ",b[h][l]);}
        else
        {printf("%d",b[h][l]);}                        
     }
     printf("\n");             
  }            
 getchar();  
getchar();     
getchar(); 
}