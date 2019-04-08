int f(int x)
{
    if((x%100!=0&&x%4==0)||(x%100==0&&x%400==0))
    return 1;
    else return 0;
}
int main()
{
    int y,m,d;
    int a,b,c;
    int amount=0;
    int p[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&y,&m,&d);
    if(m>2)
    {
           a=f(y);
           if(a==1) p[1]=p[1]+1;
           for(int i=0;i<m-1;i++)
                    amount=amount+p[i];
                    amount=amount+d;
    }
    else if(m==1) amount=d;
    else if(m==2) amount=31+d;
    printf("%d",amount);
    getchar();
    getchar();
    getchar();
}

