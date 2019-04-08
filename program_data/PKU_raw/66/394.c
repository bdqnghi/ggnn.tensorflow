

int isLeapYear(int y)
{
    if ((y%400==0) || ((y%4==0)&&(y%100!=0)))
        return true;
    else
        return false;
}

int main()
{
    char week[][5] = {
        "Sun.",
        "Mon.",
        "Tue.",
        "Wed.",
        "Thu.",
        "Fri.",
        "Sat."
    };
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d, sum = 0;
    int i, j, index;
    
    scanf("%d %d %d", &y, &m, &d);
    j = y-1;
    if (y > 400){
        sum = 5;
        j = y % 400;
    }
    for (i=y-j; i<y; i++) {
        if (isLeapYear(i))
            sum += 2;
        else
            sum += 1;
        sum %= 7;
    }
    if (isLeapYear(y)) days[1]++; // ????29?
    for (i=1; i<m; i++) 
        sum += days[i-1];
    sum += d;
    index = sum % 7;
    printf("%s", week[index]);

    return 0;
}
