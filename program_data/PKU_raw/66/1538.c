

int panduan(int nian)
{
        if((nian%4==0&&nian%100!=0)||nian%400==0)
                return 1;
        else
                return 0;
}

int main()
{
    
                int year,month,day;
                cin>>year>>month>>day;
                int i;
                long long sum=0;
                int tempsum = 0;
                for(i=1;i<=400;i++)
                {
                   tempsum+=(365+panduan(i));
                }
                for(i=1;i<=(year-1)/400;i++)
                {
                   sum+=tempsum;
                }
                for(i=((year-1)/400)*400+1;i<=year-1;i++)
                {
                        sum+=(365+panduan(i));
                }
                int b[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
                for(i=1;i<month;i++)
                {
                        sum+=b[panduan(year)][i];
                }
                sum+=day;
                char q[8][10]={"Sun.","Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};

                cout<<q[sum%7];
        return 0;
}
