int main()
{
    int y1,m1,d1,y2,m2,d2;
    scanf("%d %d %d",&y1,&m1,&d1);
    scanf("%d %d %d",&y2,&m2,&d2);
    int sum=0;
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((y1==y2)&&(m1==m2)&&(d1==d2)) printf("0");
    else
    { 
    do
    {
        sum++;
        if((y1%4==0)&&(y1%100!=0)||(y1%400==0))
            month[2]=29;
        if(d1<month[m1])
           d1++;
        else
        {
            d1=1;
            if(m1<12) m1++;
            else
            {
               y1++;
               m1=1;  
            }
        }
        month[2]=28;
    }while(!((y1==y2)&&(m1==m2)&&(d1==d2))); 
    printf("%d",sum);
    }
    getchar();
    getchar();
}
