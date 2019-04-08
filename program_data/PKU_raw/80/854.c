
int mds[2][12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                  31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    return 1;
    return 0;
}

int days(int sm, int sd, int em, int ed, int y)
{
    int lm, ld, um, ud;
    int total;
    if (sm < em)
    {
        lm = sm; um = em; ld = sd; ud = ed;
    }
    else if (sm > em)
    {
         lm = em; um = sm; ld = ed; ud = sd;
    }
    else if (sm == em)
    {
         if (sd > ed) return (sd - ed);
         return (ed - sd);
    }
    for (int i = lm; i < um; i++)
        total += mds[leap(y)][i - 1];
    if (ud > ld) total += ud - ld;
    else total -= ud - ld;
    return total;
}

int main()
{
    int sy, sm, sd, ey, em, ed, cd = 0;
    cin >> sy >> sm >> sd >> ey >> em >> ed;
    int i;
    for (i = sy; i < ey; i++)
        cd += leap(i) + 365;
    if (em > sm || (em == sm && ed >= sd))
        cd += days(sm, sd, em, ed, ey);
    else cd -= days(sm, sd, em, ed, ey) - 1;
    cout << cd << endl;
    return 0;
}
    
     
