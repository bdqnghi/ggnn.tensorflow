int main()
{
    int y1, y2 ,m1, m2, d1, d2, s, sum1 = 0, sum2 = 0, i;
    int md[2][13] = {0,31,28,31,30,31,30,31,31,30,31,30,31,0,31,29,31,30,31,30,31,31,30,31,30,31};
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    for (i = 1; i <= y1-1; i++)
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            sum1 = sum1 + 366 ;
        else sum1 = sum1 + 365; 
    for (i = 1; i <= m1-1;i++)
        if  ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
            sum1 = sum1 + md[1][i];
        else  sum1 = sum1 + md[0][i];
      sum1 = sum1 + d1;

    for (i = 1; i <= y2-1; i++)
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            sum2 = sum2 + 366 ;
        else sum2 = sum2 + 365; 
    for (i = 1; i <= m2-1;i++)
        if  ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
            sum2 = sum2 + md[1][i];
        else  sum2 = sum2 + md[0][i];
      sum2 = sum2 + d2;
      s = sum2 - sum1;
    if ( s >= 0) cout << s << endl;
    else cout << -s << endl;
    return 0;
}
    


    
    