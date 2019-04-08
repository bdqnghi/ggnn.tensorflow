//#define main xmain


int main()
{
    int i, j, n, m;
    double n1, n2, t, sum;
    scanf("%d", &m);
    for (j=0; j<m; j++) {
        sum = 0;
        n1 = 1;
        n2 = 2;
        scanf("%d", &n);
        for (i=0;i<n;i++) {
            sum += n2/n1;
            t = n1;
            n1 = n2;
            n2 = t + n2;
        }
        printf("%.3lf\n", sum);
    }
    return 0;
}


char mn[][200] = {
    "3\n"
    "5\n"
    "10\n"
    "20",
    
    "7\n"
    "13\n"
    "12\n"
    "11\n"
    "4\n"
    "5\n"
    "6\n"
    "7",

    "21\n"
    "1\n"
    "2\n"
    "3\n"
    "4\n"
    "5\n"
    "6\n"
    "7\n"
    "8\n"
    "9\n"
    "10\n"
    "11\n"
    "12\n"
    "13\n"
    "14\n"
    "15\n"
    "16\n"
    "17\n"
    "18\n"
    "19\n"
    "20\n"
    "11",
};

int xn = 0;

int max_files = sizeof(mn) / sizeof(mn[0]);

char * output_dir = "data";

void xbuild()
{
    printf(mn[xn]);
    xn++;
}
