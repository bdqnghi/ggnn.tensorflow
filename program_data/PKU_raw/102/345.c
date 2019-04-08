
int main()
{
    int n, num_m, num_w, i, j;
    float a[50], b[50];
    float t;
    char s[10];
    scanf("%d", &n);
    num_m=0;
    num_w=0;
    for(i=1; i<=n; i++)
    {
        scanf("%s %f", s, &t);
        if(s[0]=='m') a[++num_m]=t;
        else b[++num_w]=t;
    }
    for(i=num_m-1; i>=1; i--)
        for(j=1; j<=i; j++)
            if(a[j]>a[j+1])
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
    for(i=num_w-1; i>=1; i--)
        for(j=1; j<=i; j++)
            if(b[j]<b[j+1])
            {
                t=b[j];b[j]=b[j+1];b[j+1]=t;
            }
    for(i=1; i<=num_m; i++)
        printf("%.2f ", a[i]);
    for(i=1; i<num_w; i++)
        printf("%.2f ", b[i]);
    printf("%.2f\n", b[num_w]);
    return 0;
}
