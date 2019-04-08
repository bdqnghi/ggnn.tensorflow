int main()
{
    int y,m,d,x,i;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&y,&m,&d);
    if(y%4==0&&y%100!=0)
        a[1]=29;
    if(y%400==0)
        a[1]=29;
    x=0;
    for(i=0;i<m-1;i++)
        x+=a[i];
    x+=d;
    printf("%d",x);
    getchar();
    getchar();
} 
