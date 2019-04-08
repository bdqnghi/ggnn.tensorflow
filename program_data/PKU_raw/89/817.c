main()
{
   int N,i,A,B;
   int a[1000000],b[1000000];
   scanf("%d",&N);                     //???
   int c[N];
   for(i=0;i<N;i++)
   {c[i]=N;}
   i=0;
   while(scanf("%d %d",&A,&B)&&((A*A+B*B)!=0)) 
   {  
      c[A]=0;             
      a[i]=A;
      b[i]=B;             
      i++;}   
   
   for(i;i>0;i--)
   {
    c[b[i-1]]--;           
                  }
    int k=0;
    for(i=0;i<N;i++)
    {
    if(c[i]==1)
    printf("%d",i);
     else
     k++;            
        }              
    if(k==N)
    printf("NOT FOUND") ;
    
    
    getchar();      
    getchar();      
    getchar(); 
    getchar(); 
    getchar();      
    getchar();      
    getchar();
    getchar();      
    getchar(); 
    getchar(); 
    getchar();           
   }
