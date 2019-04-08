
int is_leap_year(int n);

int main()
{
    int n;
    int y, m1, m2;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j, sum = 0;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d %d %d", &y, &m1, &m2);
        sum = 0;
        if (is_leap_year(y)) /* if leap year */
            days[1] = 29;
        else
            days[1] = 28;
        if (m1 > m2) { /* make sure m2 > m1 */
            j = m1;
            m1 = m2;
            m2 = j;
        }
        for (j=m1-1; j<(m2-1); j++) 
            sum += days[j];
        if (sum % 7 == 0)
            printf("%s\n", "YES");
        else
            printf("%s\n", "NO");
    }

    return 0;
}
    

int is_leap_year(int n)
{
    if ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0)))
        return 1;
    else
        return 0;
}

