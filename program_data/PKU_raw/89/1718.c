
main()
{
    int n;
    int s=0;
    scanf("%d",&n);
    int X[n];
    for(int h=0;h<n;h++)
    {
            X[h]=h;
            }
             int i,j;
     for(;i!=0||j!=0;)
     {
            
             scanf("%d %d",&i,&j);
             X[j]=X[j]+1;
     }
     for(int t=0;t<n;t++)
     {
             if((X[t]-t)>=(n-1)) 
             {
                printf("%d",t);
                s++;
                }
       }
       if(s==0) printf("NOT FOUND");
    
     }
