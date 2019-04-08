int main()
{
    int n,m;
    int i,k=1,p=0,a[1000];
    for(;;)
    {    
        scanf("%d %d",&n,&m);
        if(m==0&&n==0) break;
        memset( a , 0 , sizeof(a));
        k=1,p=0;
        for(i=1;;i++)
        {
            if(i>n) i=i%n;
            if(p==n-1) break;
            if(a[i]==1) continue;
            
            if(k==m)
            {
                a[i]=1;
                p++;    
                k=1;
            }
            else k++;
            //printf("%d %d %d\n",a[1],a[2],a[3]);
        }
        for(i=1;i<=n;i++)
        {
           if(a[i]==0)
            {
                printf("%d\n",i);
                
                break;
            }
        }
    }
    return 0;
}
