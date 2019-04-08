int swap(int n,int *a,int *b)
{
    int win;
    int lost;
    int money;
    int i,j,k;
    i=0;
    j=0;
    int *c=(int*)malloc(n*sizeof(int));
    for(j=0;j<n;j++)
    {
             win=0;
             lost=0;       
             for(i=0;i<n;i++)
             {
                             
                             if(a[i]>b[i]) {win++;}
                             else if(a[i]<b[i]) {lost++;}
                             
                             
             } 
             c[j]=win*200-lost*200;
             
             k=a[0];
             for(i=0;i<n-1;i++)
             {
                            a[i]=a[i+1];
             }   
             a[n-1]=k;
                
             
    }
    money=c[0];
    for(j=0;j<n;j++)
    {
                    if(money<c[j]){money=c[j];}
    }
    
    return money;        
}
main()
{
    int i;
    for(i=1;;i++)
    {
        int n;
        scanf("%d",&n);
        if(n==0) break;
        else
        {
            int *a=(int*)malloc(n*sizeof(int));/*tianji*/
            int l,k;
            for(l=0;l<n;l++)
            {
                scanf("%d",&a[l]);
            }
            scanf("\n");
           
            
            for(l=0;l<n-1;l++)   /*??????*/
            {
                for(k=0;k<n-1-l;k++)
                {
                    if(a[k]<a[k+1])
                    {
                        int temp;
                        temp=a[k];
                        a[k]=a[k+1];
                        a[k+1]=temp;
                    }
                }
               
            }
            int *b=(int*)malloc(n*sizeof(int));/*qiwang*/
           
            for(l=0;l<n;l++)
            {
                scanf("%d",&b[l]);
               
                
            }
            
            //scanf("\n");
          
            
            for(l=0;l<n-1;l++)   /*??????*/
            {
                for(k=0;k<n-1-l;k++)
                {
                    if(b[k]<b[k+1])
                    {
                        int temp;
                        temp=b[k];
                        b[k]=b[k+1];
                        b[k+1]=temp;
                        
                    }
                    
                }
               
            }
           

            printf("%d\n",swap(n,a,b));
        }
    }
    getchar;
    getchar;
}
