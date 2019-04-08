int main(int argc, const char * argv[])
{
    int n;
    scanf("%d", &n);
    struct aa {
        char a[7];
        double b;
    }a[100];
    int m=0, f=0, g=0, h=0;
    double d[100], e[100];
    for (int c=0; c<n; c++) {
        scanf("%s %lf", a[c].a, &a[c].b);
        if (a[c].a[0]=='m') {
            m++;
            d[g]=a[c].b;
            g++;
        }else{
            f++;
            e[h]=a[c].b;
            h++;
        }
    }
    for (int j=m-1; j>0; j--) {
        for (int r=0; r<j; r++) {
            if (d[r]>d[r+1]) {
                double tmp;
                tmp=d[r+1];
                d[r+1]=d[r];
                d[r]=tmp;
            }
        }
    }
    for (int j=h-1; j>0; j--) {
        for (int r=0; r<j; r++) {
            if (e[r]<e[r+1]) {
                double tmp;
                tmp=e[r+1];
                e[r+1]=e[r];
                e[r]=tmp;
            }
        }
    }
    for (int k=0; k<m; k++) {
        printf("%.2lf ", d[k]);
    }
    for (int l=0; l<f-1; l++) {
        printf("%.2lf ", e[l]);
    }
    printf("%.2lf", e[f-1]);
    return 0;
}