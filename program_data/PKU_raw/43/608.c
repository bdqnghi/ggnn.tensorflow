int main()
{
    int m, i, g, sign1, sign2;
    scanf("%d", &m);
    for (i=2;i<=m/2;i++) {
        sign1=0;
        sign2=0;
        if (i%2==0) {
            continue;
        }
        for (g=2;g<i/2;g++) {
            if (i%g!=0) { 
                continue;
            } else {
                sign1=sign1+1;
            }
        }
        if (sign1==0) {
            for (g=2;g<(m-i)/2;g++) {
                if ((m-i)%g!=0) { 
                    continue;
                } else {
                    sign2=sign2+1;
                }
            }
        } else {
            continue;
        }
        if (sign2==0) {
            printf("%d %d\n\n", i, m-i);
        } else {
            continue;
        }
    }
    return 0;
}