
int main() {
    int year1,month1,day1;
    int year2,month2,day2;
    int i, temp;
    long int n=0;
    int A[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int B[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    scanf("%d%d%d", &year1, &month1, &day1);
    scanf("%d%d%d", &year2, &month2, &day2);
    temp=year1;
    while (temp!=year2) {
        if ((temp%4==0&&temp%100!=0)||(temp%400==0)) {
            n=n+366;
        } else {
            n=n+365;
        }
        temp+=1;
    }
    temp=0;
    if ((year1%4==0&&year1%100!=0)||(year1%400==0)) {
        for(i=0;i<month1-1;i++) {
            temp=temp+B[i];
        }
        temp=temp+day1;
    } else {
        for(i=0;i<month1-1;i++) {
            temp=temp+A[i];
        }
        temp=temp+day1;
    }
    n=n-temp;
    temp=0;
    if ((year2%4==0&&year2%100!=0)||(year2%400==0)) {
        for(i=0;i<month2-1;i++) {
            temp=temp+B[i];
        }
        temp=temp+day2;
    } else {
        for(i=0;i<month2-1;i++) {
            temp=temp+A[i];
        }
        temp=temp+day2;
    }
    n=n+temp;
    printf("%ld\n", n);
    return 0;
}