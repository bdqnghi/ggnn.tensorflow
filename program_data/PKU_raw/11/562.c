int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int s[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int m=0;
    int n=0;
    for(m=0;m<y-1;m++)
        n+=s[m];
    int D;
    if(((x%4==0&&x%100!=0||x%400==0)&&y!=1&&y!=2))
        D=n+z+1;
    else
        D=n+z;
    printf("%d",D);
    return 0;
}
