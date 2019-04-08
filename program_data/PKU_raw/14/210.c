


int main (){
    int n, i, k;
    
    struct stu{
           int id;
           int chn;
           int math;
           int total;
           };
    struct stu a[100001];
    
    scanf("%d\n", &n);
    
    for (i=0; i<n; i++){
        scanf ("%d %d %d", &a[i].id, &a[i].chn, &a[i].math);
        (a[i].total)=(a[i].chn)+(a[i].math);
    }
    
    for (k=1; k<5; k++){
        for (i=0; i<n-k; i++){
            if ((a[i].total)>=(a[i+1].total)){
            a[100000].id=a[i].id;
            a[100000].total=a[i].total;
            a[i].id=a[i+1].id;
            a[i+1].id=a[100000].id;
            a[i].total=a[i+1].total;
            a[i+1].total=a[100000].total;}
        }
    }
    
    printf("%d %d\n", a[n-1].id, a[n-1].total);
    printf("%d %d\n", a[n-2].id, a[n-2].total);
    printf("%d %d\n", a[n-3].id, a[n-3].total);
    
    return 0;
    }