int y,m,d;
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
void cal(int x)
{
    int sum=0,i;
    if(x)
    {
        for(i=0;i<m-1;i++)
            sum+=b[i];
        sum+=d;
    }
    else
    {
        for(i=0;i<m-1;i++)
            sum+=a[i];
        sum+=d;
    }
    printf("%d\n",sum);

}
int main()
{
    scanf("%d%d%d",&y,&m,&d);
    if(y%100==0)
    {
        if(y%400==0) cal(1);
        else  cal(0);
    }
        else
        {
            if(y%4==0) cal(1);
            else cal(0);
        }
    return 0;
    
}