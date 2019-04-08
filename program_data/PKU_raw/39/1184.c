

struct student {
    char name[25];
    int qi_g;
    int bang_g;
    char gb;
    char xb;
    int paper;
    int money;
};

int comp_money(struct student s);

int main()
{
    struct student a[LEN];
    int n, i;
    int sum, max, max_i;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s %d %d %c %c %d", a[i].name, &a[i].qi_g, &a[i].bang_g, &a[i].gb, &a[i].xb, &a[i].paper);
        a[i].money = comp_money(a[i]);
        
    }

    sum = max = a[0].money;
    max_i = 0;
    for (i=1; i<n; i++) {
        if (a[i].money > max) {
            max = a[i].money;
            max_i = i;
        }
        sum += a[i].money;
    }

    printf("%s\n", a[max_i].name);
    printf("%d\n", a[max_i].money);
    printf("%d\n", sum);
    
    return 0;
}

int comp_money(struct student s)
{
    int sum = 0;
    if ((s.qi_g > 80) && (s.paper >= 1)) sum += 8000;
    if ((s.qi_g > 85) && (s.bang_g > 80)) sum += 4000;
    if (s.qi_g > 90) sum += 2000;
    if ((s.qi_g > 85) && (s.xb == 'Y')) sum += 1000;
    if ((s.bang_g > 80) && (s.gb == 'Y')) sum += 850;
    /*printf("%s %d %d %c %c %d %d\n", s.name, s.qi_g, s.bang_g, s.gb, s.xb, s.paper, sum);*/

    return sum;
}
