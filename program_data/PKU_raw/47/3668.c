
int main(){
    int i, n, a[MAX];
    scanf("%d", &n);
    for(i=0; i!=n; ++i) scanf("%d", a+i);
    for(i=n-1; i!=0; --i) printf("%d ", a[i]);
    printf("%d\n", a[0]);
}

