 
int main() {
    int x1,y1,x2,y2;
    int **a, **b, **c;
    int i,j,k;
    //printf("intput x1,y1?");
    scanf("%d%d", &x1, &y1);
   // printf("intput Array A(%d,%d):\n", x1, y1);
    a = (int**)malloc(sizeof(int*)*x1);
    for(i=0;i<x1;++i) {
        a[i] = (int*)malloc(sizeof(int)*y1);
        for(j=0;j<y1;++j) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
     
   // printf("intput x2,y2:");
    scanf("%d%d", &x2, &y2);
    if(y1 != x2) {
        printf("Wrong parameter.");
        for(i=0;i<x1;++i) {
            free(a[i]);
        }
        free(a);
        return 0;
    }
  //  printf("intput Array A(%d,%d):\n", x2, y2);
    b = (int**)malloc(sizeof(int*)*x2);
    for(i=0;i<x2;++i) {
        b[i] = (int*)malloc(sizeof(int)*y2);
        for(j=0;j<y2;++j) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
     
    c = (int**)malloc(sizeof(int*)*x1);
    for(i=0;i<x1;++i) {
        c[i] = (int*)malloc(sizeof(int)*y2);
        for(j=0;j<y2;++j) {
            c[i][j] = 0;
            for(k=0;k<y1;++k) {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
     
    for(i=0;i<x1;++i) {//??c
        for(j=0;j<y2-1;++j) {
            printf("%d ", c[i][j]);
    
        }
cout << c[i][y2-1];
        printf("\n");
    }
     
    //????
    for(i=0;i<x1;++i) {
        free(a[i]);
        free(c[i]);
    }
    free(a);
    free(c);
     
    for(i=0;i<x2;++i) {
        free(b[i]);
    }
    free(b);
     
    return 0;
}