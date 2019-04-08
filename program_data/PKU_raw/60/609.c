main()
{
    int n,i,j,k=0,b=0,c=0;
    scanf("%d",&n);
    for(i=3;i<=n;i=i+2)
    {
     for(j=2;j<=(int)sqrt(i);j++)
     {
      if(i%j==0)break;
     }    
     if(j==((int)sqrt(i)+1))b=1;
     if((b==1)&&(c==1))
     {
        printf("%d %d\n",i-2,i);
        k++;
      }
      c=b;
      b=0;
    }
    if(k==0)printf("empty");
    getchar();  
    getchar();  
    getchar();  
    getchar();  
}