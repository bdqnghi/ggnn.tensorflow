int main()
{
    int days[] = {0, 31, 28, 31, 30, 31, 30,
                31, 31, 30, 31, 30, 31};
    char *weekdays[]= 
        { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int y, m, d, w, i;
    scanf("%d%d%d",&y,&m,&d);
    w =y%7+y/4-y/100+y/400;
    for (i=1;i<m;i++)
        w=w+days[i];
    w=w+d-1;
    if (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && (m <= 2))
        w=w-1;
    printf("%s.\n", weekdays[w % 7]);

    return 0;
}

