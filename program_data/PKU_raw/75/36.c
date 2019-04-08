int main()
{
    int a[1000],b[1000],t,n,i=0,j,time[1000]={0};
    char c;
    while(scanf("%d%c",&t,&c)&&c==',')
    {
       a[i]=t;
       i++;
    }
    a[i]=t;
    n=i+1;
    i=0;
    while(scanf("%d%c",&t,&c)&&c==',')
    {
       b[i]=t;
       i++;
    }
    b[i]=t;
    for(i=0;i<n;i++)
    {
       for(j=a[i];j<b[i];j++)
       time[j]++;
    }
    int max=0;
    for(j=0;j<1000;j++)
    {
       if(time[j]>max) max=time[j];
    }
    printf("%d %d",n,max);
         
    /*for(i=0;i<n;i++)        
    printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<n;i++)        
    printf("%d ",b[i]);
    scanf("%d",&i);*/
    return 0;
}        