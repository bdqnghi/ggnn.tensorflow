main()
{
      int x1,y1,x2,y2,i,h,j;
      scanf("%d %d",&x1,&y1);
      int* p=(int*)malloc(x1*y1*sizeof(int));
      for(i=0;i<(x1*y1);i++)
      {scanf("%d",&p[i]);}
       scanf("%d %d",&x2,&y2);
      int* q=(int*)malloc(x2*y2*sizeof(int));
      for(i=0;i<(x2*y2);i++)
      {scanf("%d",&q[i]);}
      int* m=(int*)malloc(x1*y2*sizeof(int));
      for(i=0;i<(x1*y2);i++)
      {m[i]=0;}
      
      for(h=0;h<x1;h++)
      {
          for(j=0;j<y2;j++)
          {
              if(j==(y2-1))
              {
              for(i=0;i<y1;i++)
              {m[h*y2+j]+=p[h*y1+i]*q[i*y2+j];}
               printf("%d",m[h*y2+j]);
              }
              else
              { 
                 for(i=0;i<y1;i++)
               {m[h*y2+j]+=p[h*y1+i]*q[i*y2+j];}
              printf("%d ",m[h*y2+j]);
               }
            
          }
          printf("\n");
      }
      
      getchar();
      getchar();
      free(p);free(q);free(m);
      
}
