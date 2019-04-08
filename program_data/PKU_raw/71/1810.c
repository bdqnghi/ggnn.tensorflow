
int main()
{
    int n, e, i, j, y, m1, m2, rlt;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        int d1=0, d2=0;
        scanf("%d %d %d", &y, &m1, &m2);
        
        if(m1<m2)
        {
            e=m1;
            m1=m2;
            m2=e;
        }
        
        if(m1>1)
        {
            for(j=1;j<m1;j++)
            {
                if(j==4||j==6||j==9||j==11)
                    d1+=30;
                else if(j==2)
                {
                    if((y%4==0&&y%100!=0)||y%400==0)
                    {
                        d1+=29;
                    }else{
                        d1+=28;
                    }
                }else{
                    d1+=31;
                }
            }
        }
        
        if(m2>1)
        {
            for(j=1;j<m2;j++)
            {
                if(j==4||j==6||j==9||j==11)
                {
                    d2+=30;
                }else if(j==2){
                    if((y%4==0&&y%100!=0)||y%400==0)
                    {
                        d2+=29;
                    }else{
                        d2+=28;
                    }
                }else{
                    d2+=31;
                }
            }
        }
        
        rlt=(d1-d2)%7;
        if(rlt==0)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}