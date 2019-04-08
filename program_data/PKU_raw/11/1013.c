int main()
{
    int check(int a);
    int count(int x[], int w, int y);
    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);
    
    int k;
    int sum;
    k=check(year);
    if(k==1)
    {
           int days1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
           sum=count(days1, month, day);
           printf("%d", sum);
    }
    else
    {
          int days2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
          sum=count(days2, month, day);
           printf("%d", sum);
    }
    
    
    return 0;
}

    int check(int a)
    {
        int b,c,d;
        b = a%4;
        c = a%100;
        d = a%400;
        if (b!=0)
        {
             return 1;
        }
        else if(c==0&&d!=0)
        {
             return 1;
        }
        else return 0;

    }
     
     int count(int x[], int w, int y)
     {
         int sum=0;
         int i;
         for(i=1;i<w;i++)
         {
                          sum=sum+x[i];
         }
         sum=sum+y;
         return sum;
     }
 
