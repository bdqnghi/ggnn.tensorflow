int main()
{
    int day,month,year,i,sum=0,n,m,tianshu[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
    char week[][6]={ {'S','u','n','.'}, 
                {'M','o','n','.'}, 
                {'T','u','e','.'}, 
                {'W','e','d','.'}, 
                {'T','h','u','.'}, 
                {'F','r','i','.'}, 
                {'S','a','t','.'} }; 
    scanf("%d%d%d",&year,&month,&day);
    if((year%4==0 && year%100!=0)||year%400==0)
        tianshu[2]=29;
    else
        tianshu[2]=28;
    for (i=0;i<month;i++) 
        sum+=tianshu[i];
    sum+=day;
    n=year-1+(int)((year-1)/4)-(int)((year-1)/100)+(int)((year-1)/400)+sum;
    m=n%7;
    printf("%s\n",week[m]);
    return 0;
}