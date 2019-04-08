
int  main()
{
     int d,e,f,g,i,j,k,l,m,n,x,y;
     int a[10000]={0};
     int b[10000]={0};
     scanf("%d",&d);
x=y=1;         
a[0]=b[0]=-1;
    while(x+y!=0)
    {
        scanf("%d %d",&x,&y);
        a[x]++;
        b[y]++;
    }
    
     for(j=0,m=1,n=0;j<d;j++)
        {
            if(b[j]==d-1&&a[j]==0)
             {
                      l=j;           
             n=1;
           
            }
            
           
        }                                            
     if(n==1)
       printf("%d",l);
       else
        printf("NOT FOUND");
        
 
}                                                                                     
                