main()
{
    int year,month,day,leap,sum=0;
    int a[12],i,j;
    scanf("%d",&year);
    scanf("%d",&month);
    scanf("%d",&day);
    if((year%4==0&&year%100!=0)||(year%400==0))
        leap=1;
    else
        leap=0;
    a[0]=31;a[2]=31;a[3]=30;a[4]=31;a[5]=30;a[6]=31;a[7]=31;a[8]=30;a[9]=31;a[10]=30;a[11]=31;
    if(leap==1)
        a[1]=29;
    else a[1]=28;
    for(i=0;i<12;i++)
    {
        if(month==i+1)
        {
            for(j=0;j<i;j++)
                sum+=a[j];
            sum+=day;
            break;
        }
    }
    printf("%d",sum);
    getchar();
    getchar();
}
