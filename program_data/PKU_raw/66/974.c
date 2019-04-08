
int main()
{
    int year, month, day;
    int i, s, sum = 0;
    scanf("%d%d%d", &year, &month, &day);
    /* ?????400???? */
    s = (year-1) % 400 + 1;
    for (i=1; i<s; i++) {
        /* ???????????1 */
        if(i%4!=0||(i%100==0&&i%400!=0)) {
            sum++;
        }
        /* ??????????2 */
        else if((i%4==0&&i%100!=0)||i%400==0) {
            sum+=2;
        }
    }
    for (i=1; i<month; i++) {
        /* ??????????3 */
        if(i==1||i==3||i==5||i==7||i==8||i==10) {
            sum+=3;
        }
        /* ??????????2 */
        else if(i==4||i==6||i==9||i==11) {
            sum+=2;
        }
        /* 2??????????? */
        else if(i==2&&(year%4!=0||(year%100==0&&year%400!=0))) {
            sum+=0;
        }
        /* 2??????????1 */
        else if(i==2&&(year%4==0&&year%100!=0)||year%400==0) {
            sum+=1;
        }
    }
    /* ?????? */
    sum += day;
    switch (sum%7) {
    case 1:
        printf("Mon.");
        break;
    case 2:
        printf("Tue.");
        break;
    case 3:
        printf("Wed.");
        break;
    case 4:
        printf("Thu.");
        break;
    case 5:
        printf("Fri.");
        break;
    case 6:
        printf("Sat.");
        break;
    case 0:
        printf("Sun.");
    }
    return 0;
}
