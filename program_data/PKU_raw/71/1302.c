
int main()
{
    int year, m1, m2;
    int i, m, n, diff;
    
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        /* ?????? */
        scanf("%d%d%d", &year, &m1, &m2);
        /* ???????? */
        if (m1 > m2) {
            int t = m1;
            m1 = m2;
            m2 = t;
        }
        /* ??????? */
        diff = 0;
        for (m=m1; m<m2; m++) {
            switch (m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
                diff = diff + 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                diff = diff + 30;
                break;
            case 2:
                if ((year%4==0)&&(year%100!=0)||(year%400==0)) {
                    diff = diff + 29;
                }
                else {
                    diff = diff + 28;
                }
                break;
            }
        }
        /* ????????7?? */
        if (diff % 7 == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}

