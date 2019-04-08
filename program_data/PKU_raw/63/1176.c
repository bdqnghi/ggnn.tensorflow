main()
{
   int x1,y1,x2,y2,i,j,k,s;
   scanf("%d %d",&x1,&y1);
   int*p=(int*)malloc(x1*y1*sizeof(int));
   for(i=0;i<x1*y1;i++)
   {
     scanf("%d",&p[i]);
   }
   scanf("%d %d",&x2,&y2);
   int*q=(int*)malloc(x2*y2*sizeof(int));
   for(i=0;i<x2*y2;i++) 
   {
     scanf("%d",&q[i]);
   } 
   for(i=0;i<x1;i++)
   {
    for(j=0;j<y2;j++) 
    {
       s=0;
       for(k=0;k<y1;k++)
       {
         s=s+p[i*y1+k]*q[k*y2+j];
       }
       if(j==0)printf("%d",s);
       else printf(" %d",s);
       if(j==y2-1)printf("\n");
    }
   }
   getchar();
   getchar();
   getchar();
}                                                                                     
