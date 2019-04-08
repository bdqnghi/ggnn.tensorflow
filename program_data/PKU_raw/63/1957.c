main()
{
      int a[100][100],b[100][100],x1,y1,x2,y2,x3,y3,c,d,e[100][100];
      char i;
      scanf ("%d %d",&x1,&y1);
     
      for (c=0;c<=x1-1;c++)
      {
          for (d=0;d<=y1-1;d++)
          {
          scanf("%d%c",&a[c][d],&i);
          if (i!=' ')
          break;
          else ;
          }
          
      }
       scanf ("%d %d",&x2,&y2);
      for (c=0;c<=x2-1;c++)
      {
          for (d=0;d<=y2-1;d++)
          {
          scanf("%d%c",&b[c][d],&i);
          if (i!=' ')
          break;
          else ;
          }
          
      }
      x3=x1;
      y3=y2;
     // printf("%d\n",a[0][4]);
      for (c=0;c<=x3-1;c++)
      {
          for (d=0;d<=y3-1;d++)
          {
          e[c][d]=0;
          for (i=0;i<=x2-1;i++)
          {e[c][d]=e[c][d]+a[c][i]*b[i][d];
          //printf("%d %d %d\n",i,c,d);
          //printf("%d %d %d\n",a[c][i],b[i][d],e[c][d]);
          }
          }
          
      }
      for (c=0;c<=x3-1;c++)
      {
          for (d=0;d<=y3-2;d++)
          {
          printf("%d ",e[c][d]);
          }
      printf("%d\n",e[c][y3-1]);
      }
      //printf("%d",e[0][1]);
      
     }