main()
{
    int year,month,day,sum=0;
    int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&year,&month,&day);
    if(((year%4==0)&&(year%100!=0))||(year%400==0))          // when this year is a leap year.
    {
        if(month>2)    // when >=3 month
        {
              sum=sum+29+31;
              for(int k=3;k<month;k++)
              {
                  sum=sum+d[k];    
              }  
              sum=sum+day;       
        }   
        else if(month==2)
        {
            sum=31+day;
        }                
        else
        {
            sum=day;
        }  
      
    }
    else                // when this year is not a leap year.
    {
        if(month>2)    // when >=3 month
        {
              sum=sum+28+31;
              for(int k=3;k<month;k++)
              {
                  sum=sum+d[k];    
              }  
              sum=sum+day;       
        }   
        else if(month==2)
        {
            sum=31+day;
        }                
        else
        {
            sum=day;
        }  
    }
    printf("%d",sum);
    getchar();
    getchar(); 
    getchar();
}   
