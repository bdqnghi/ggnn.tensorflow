int main()
{
    int n,i,l,m,s;
    for(s=0;s<10000;s=s+1){
        scanf("%d%d",&n,&m);
        if(n>0&&m>0){
            int a[1000000];
            for(i=0;i<n;i=i+1){
                a[i]=i+1;
            }
            for(l=n;l>1;l=l-1){
                if((m%l-1)>0){
                for(i=0;i<(m%l-1);i=i+1){
                     a[l+i]=a[i];
                }
                }
                for(i=0;i<l;i=i+1){
                    a[i]=a[m%l+i];
               }
            }
            printf("%d\n",a[0]);
        }
    }
    return 0;
}

