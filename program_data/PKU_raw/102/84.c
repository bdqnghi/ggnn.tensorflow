const int MAXN = 50;
int n;
double a[MAXN], b[MAXN];
int nummale, numfemale;
int main() {
    nummale = 0;
    numfemale = 0;
    scanf("%d", &n);
    char sex[10];
    double h;
    for (int i = 0; i < n; ++i) {
        scanf("%s%lf", sex, &h);
        if (strcmp(sex, "male") == 0) {
                        a[nummale++] = h;
        } else {
               b[numfemale++] = h;
        }
        }
        sort(a, a + nummale);
        sort(b, b + numfemale);
        for (int i = 0; i < nummale; ++i)
            printf("%.2lf ", a[i]);
        for (int i = numfemale - 1; i > 0; --i)
            printf("%.2lf ", b[i]);
        if (numfemale > 0)
           printf("%.2lf\n", b[0]);
    
    return 0;
}
