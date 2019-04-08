main()
{
      int x1,y1,x2,y2;
      int i,j,k;
      int sum;
      scanf("%d %d",&x1,&y1);
      int*a=(int*)malloc(x1*y1*sizeof(int));
      for(i=0;i<x1;i++)
      {
            for(j=0;j<y1;j++)
            scanf("%d",&a[i*y1+j]);
      }
      scanf("%d %d",&x2,&y2);
      int*b=(int*)malloc(x2*y2*sizeof(int));
      int*c=(int*)malloc(x1*y2*sizeof(int));
      for(i=0;i<x2;i++)
      {
           for(j=0;j<y2;j++)
           scanf("%d",&b[i*y2+j]);
      }
      for(i=0;i<x1;i++)
      {
                       for(j=0;j<y2;j++)
                       {
                                        sum=0;
                                        for(k=0;k<x2;k++)
                                        sum=sum+a[i*y1+k]*b[k*y2+j];
                                        c[i*y2+j]=sum;
                                        printf("%d",c[i*y2+j]);
                                        if((j+1)%y2!=0)
                                        printf(" ");
                                        else
                                        printf("\n");
                       }
      }
      free(a);
      free(b);
      free(c);
      getchar();
      getchar();
}

