/*bss*/
int x1, y1, x2, y2, a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];


int main(){
    int i, j, k;
    scanf("%d%d", &x1, &y1);
    for(i=0; i<x1; ++i)
        for(j=0; j<y1; ++j)
            scanf("%d", &a[i][j]);
    scanf("%d%d", &x2, &y2);
    for(i=0; i<x2; ++i)
        for(j=0; j<y2; ++j)
            scanf("%d", &b[i][j]);
    if(y1!=x2) return 0;
    for(i=0; i<x1; ++i)
        for(j=0; j<y2; ++j)
            for(k=0; k<x2; ++k)
                c[i][j]+=a[i][k]*b[k][j];
    for(i=0; i<x1; ++i){
        printf("%d", c[i][0]);
        for(j=1; j<y2; ++j)
            printf(" %d", c[i][j]);
        puts("");
    }
    return 0;
}
