int main(){
    int n, i, a=0, b=0, m;
    float height[50], male[50], female[50], t;
    char gender[50][10];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s%f", gender[i], &height[i]);
        if (strcmp(gender[i], "male")==0) {
            male[a]=height[i];
            a++;
        }else{
            female[b]=height[i];
            b++;
        }
    }
    m=10000;
    while (m>0&&a>1) {
        for (i=1; i<a; i++) {
            if (male[i]<male[i-1]) {
                t=male[i];
                male[i]=male[i-1];
                male[i-1]=t;
            }
            m--;
        }
    }
    m=10000;
    while (m>0&&b>1) {
        for (i=1; i<b; i++) {
            if (female[i]>female[i-1]) {
                t=female[i];
                female[i]=female[i-1];
                female[i-1]=t;
            }
            m--;
        }
    }
    for (i=0; i<a; i++) {
        printf("%.2f ", male[i]);
    }
    for (i=0; i<b-1; i++) {
        printf("%.2f ", female[i]);
    }
    printf("%.2f", female[b-1]);
    return 0;
}  