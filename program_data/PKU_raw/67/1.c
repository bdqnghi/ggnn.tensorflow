//#define main xmain


int main()
{
    int i, n;
    double a, b, c;
    
    scanf("%d", &n);
    scanf("%lf%lf", &a, &b);
    c = b/a;

    for (i=1; i<n; i++) {
        scanf("%lf%lf", &a, &b);
        if (b/a - c > 0.05) {
            printf("better\n");
        }
        else if (c - b/a > 0.05) {
            printf("worse\n");
        }
        else {
            printf("same\n");
        }
    }
    return 0;
}


char mn[][200] = {
    "5\n"
    "125 99\n"
    "112 89\n"
    "145 99\n"
    "99 97\n"
    "123 98",
    
    "7\n"
    "100 20\n"
    "100 24\n"
    "100 16\n"
    "100 23\n"
    "100 19\n"
    "100 28\n"
    "100 10",

    "13\n"
    "97 15\n"
    "97 20\n"
    "97 18\n"
    "97 26\n"
    "97 7\n"
    "97 18\n"
    "97 29\n"
    "97 14\n"
    "97 3\n"
    "97 12\n"
    "97 1\n"
    "97 9\n"
    "100 15",
};

int xn = 0;

int max_files = sizeof(mn) / sizeof(mn[0]);

char * output_dir = "data";

void xbuild()
{
    printf(mn[xn]);
    xn++;
}
