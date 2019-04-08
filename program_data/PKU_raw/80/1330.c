
int main()
{
    int y1, y2, m1, m2, d1, d2, n1=0, n2, n3, num;
    int ly=0, i, a=0, b=0;

    scanf("%d %d %d\n%d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);
    if(y2-y1>0)
    {
        for(i=y1;i<y2;i++)
        {
            if( (i%4==0 && i%100!=0) || (i%400==0) )
                ly++;
            n1=(y2-y1)*365+ly;
        }
    }

    
    if(m1>1)
    {
        for(i=1;i<m1;i++)
        {
            if(i==2)
            {
                if( (y1%4==0 && y1%100!=0) || (y1%400==0) )
                {
                    a+=29;
                }else{
                    a+=28;
                }
            }else if( i==4 || i==6 || i==9 || i==11 ){
                a+=30;
            }else{
                a+=31;
            }
        }
    }
    // a?m1????
    if(m2>1)
    {
        for(i=1;i<m2;i++)
        {
            if(i==2)
            {
                if( (y2%4==0 && y2%100!=0) || (y2%400==0) )
                {
                    b+=29;
                }else{
                    b+=28;
                }
            }else if( i==4 || i==6 || i==9 || i==11 ){
                b+=30;
            }else{
                b+=31;
            }
        }
    }

    n2=b-a;
 
    n3=d2-d1;
    
    num=n1+n2+n3;
    
    printf("%d\n", num);

    return 0;
}
