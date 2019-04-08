main()
{
   int n;
   scanf("%d",&n);
   int *p=(int *)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++)  *(p+i)=0;
   int *t=(int *)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++)  *(t+i)=0;
   int a,b;
    scanf("%d %d",&a,&b);
   while(a!=0||b!=0)
   {
      *(t+a)=*(t+a)+1;
      *(p+b)=*(p+b)+1;
      scanf("%d %d",&a,&b);        
   }
   int y=0;
   for(int i=0;i<n;i++)
   {
      if((*(p+i)==n-1)&&(*(t+i)==0))
      {
         printf("%d",i);
         y=1;                          
      }    
   }
   if(y==0)
     printf("NOT FOUND");
   getchar();
   getchar();
   
}
