main()
{
     int  a[L][L],b[L][L];
     int m,n,d,i,j,x,y;
     scanf("%d %d",&m,&n);
     memset(a,0,sizeof(a));
     a[4][4]=m;
     for(d=1;d<=n;d++)
     {
              memset(b,0,sizeof(b));        
              for(i=1;i<L-1;i++)
              {
                       for(j=1;j<L-1;j++)
                       {
                               b[i][j]+=a[i][j];
                               for(x=-1;x<=1;x++)
                               {
                                       for(y=-1;y<=1;y++)
                                       b[i+y][j+x]=b[i+y][j+x]+a[i][j];          
                               }
                       }         
              }
              memcpy(a,b,sizeof(a));        
     }
     for(i=0;i<L;i++)
     {
              for(j=0;j<L-1;j++)
              printf("%d ",a[i][j]);
              printf("%d\n",a[i][8]);        
     }
     getchar();
     getchar();
     getchar();
     getchar();
}