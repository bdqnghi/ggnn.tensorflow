
typedef struct point{
    int x, y, z;
} P;

typedef struct len{
    double real;
    P *a, *b;
} L;

P points[10];
L len[1000];
int lencount=0;

int cmp(const void *a, const void *b){
    double k;
    L *aa=(L*)a, *bb=(L*)b;
    if((k=aa->real - bb->real)) return k<0;
    return aa->a - bb->a;
}
int main()
{
    int n, i, j;
    double tmp;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &(points[i].x));
        scanf("%d", &(points[i].y));
        scanf("%d", &(points[i].z));
    }
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            tmp=0;
            tmp+=pow(points[i].x-points[j].x, 2);
            tmp+=pow(points[i].y-points[j].y, 2);
            tmp+=pow(points[i].z-points[j].z, 2);
            len[lencount].real=pow(tmp, 0.5);
            len[lencount].a=&points[i];
            len[lencount].b=&points[j];
            lencount++;
        }
    }
    qsort(len, lencount, sizeof(L), cmp);
    for(i=0; i<lencount; i++){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",
        (len[i].a)->x, (len[i].a)->y, (len[i].a)->z,
        (len[i].b)->x, (len[i].b)->y, (len[i].b)->z,
        len[i].real);
    }

    return 0;
}
