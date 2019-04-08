int main()
{
    int m,n,i,t,j,y,a,b;
    scanf("%d %d",&m,&n);
    for(i=m,t=0;i<=n;i++)
    {
        for(j=2;j<i;j++)
            if(i%j==0) break;
        for(y=0,a=0,b=i;b!=0;)
        {
            a=b%10;
            b=b/10;
            y=y*10+a;
        }
        if(j==i && y==i) 
        {
            if(t==0) 
            {
                printf("%d",i);
                t++;
            }
            else printf(",%d",i);
        }
    }
    if(t==0) printf("no");
    getchar();
    getchar();
}