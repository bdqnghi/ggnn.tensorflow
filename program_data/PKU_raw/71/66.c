int main()
{
    int i,j,n,sum,year,month1,month2,nor[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}, run[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    sum=0;
                    scanf("%d%d%d",&year,&month1,&month2);
                    if((((year%4==0)&&(year%100!=0))||((year%4==0)&&(year%400==0)))&&(month1<month2))
                    {
                                                                          for(j=month1;j<month2;j++)
                                                                                                    sum+=run[j];
                    }
                    else if((((year%4==0)&&(year%100!=0))||((year%4==0)&&(year%400==0)))&&(month1>month2))
                    {
                         for(j=month2;j<month1;j++)
                                                                                                    sum+=run[j];
                    }
                    else if(((year%4==0)&&(year%400!=0))&&(month1<month2))
                    {
                         for(j=month1;j<month2;j++)
                                                                                                    sum+=nor[j];
                    }
                    else if(((year%4==0)&&(year%400!=0))&&(month1>month2))
                    {
                        for(j=month2;j<month1;j++)
                                                                                                    sum+=nor[j];
                    }
                    else if((year%4!=0)&&(month1<month2))
                    {
                         for(j=month1;j<month2;j++)
                                                                                                    sum+=nor[j];
                    }
                    else if((year%4!=0)&&(month1>month2))
                    {
                        for(j=month2;j<month1;j++)
                                                                                                    sum+=nor[j];
                    }
                    if(sum%7==0)
                    printf("YES\n");
                    else
                    printf("NO\n");
    }                                
    return 0;
}
                   