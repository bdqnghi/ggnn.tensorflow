int main()
{
    int i=0,j,a,b;
    scanf("%d%d",&a,&b);
    for(;a>0;a/=2) {
        j=b;
    for(;j>0;j/=2)
    {
        if(a==j) {
            printf("%d",a);
            i=1;break;}
    }
    if(i==1) break;}
    return 0;
}