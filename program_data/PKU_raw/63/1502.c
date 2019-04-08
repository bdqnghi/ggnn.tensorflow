main()
{
     int x1,y1,x2,y2;
     scanf("%d",&x1);
     scanf("%d",&y1);
     int*p1=(int*)malloc(x1*y1*sizeof(int));
     for(int i=0;i<x1*y1;i++)
          scanf("%d",&p1[i]);
     scanf("%d",&x2);
     scanf("%d",&y2);
     int*p2=(int*)malloc(x2*y2*sizeof(int));
     for(int i=0;i<x2*y2;i++)
          scanf("%d",&p2[i]);
     int*p3=(int*)malloc(x1*y2*sizeof(int));
     for(int i=0;i<x1;i++)
     {
          for(int j=0;j<y2;j++)
          {
               p3[i*y2+j]=0;
               for(int k=0;k<y1;k++)
                    p3[i*y2+j]=p3[i*y2+j]+p1[i*y1+k]*p2[k*y2+j];
          }                                                                                  /*?????????*/
     }                                                                      
     for(int i=0;i<x1;i++)
     {
          for(int j=0;j<y2;j++)
          {
               if(j<y2-1)
               printf("%d ",p3[i*y2+j]);
               else
               printf("%d\n",p3[i*y2+j]);
          }     
     }
        return 0;
}    
