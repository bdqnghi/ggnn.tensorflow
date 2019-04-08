

int main()
{
    int year, month, date, leap, num = 0;
    int mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d", &year, &month, &date);

    if (year%100 == 0){
        if (year%400 == 0) leap = 1;
        else leap = 0;
    }
    else {
        if (year%4 == 0) leap = 1;
        else leap = 0;
    }

    int i;
    switch(leap)
    {
        case 1: for ( i = 0; i < month - 1; i++ ){
                    num = num + mon[i];
                }
                if ( month >= 3 ) num = num + date + 1;
                else num = num + date;
                break;
        case 0: for ( i = 0; i < month - 1; i++ ){
                    num = num + mon[i];
                }
                num = num + date;
    }

    printf("%d", num);

    return 0;
}
