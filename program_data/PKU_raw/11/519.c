int main()
{
    int A[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int a,b,c,i,y;
    scanf("%d%d%d",&a,&b,&c);
    y=0;
    for(i=0;i<b-1;i++)
    {
        y=y+A[i];
    }
    y=y+c;
    if(a%4==0&&a%100!=0||a%400==0)
    {
       if(b==1||b==2)
       {
          printf("%d",y);
       }
       else
       {
          y=y+1;
          printf("%d",y);
       }
    }
    else
    {
        printf("%d",y);
    }
    return 0;
}
    