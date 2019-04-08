
struct point
{
    double x, y;
};

double dis(double x1, double y1, double x2, double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main()
{
    int n, i, j;
    double ans, t;
    scanf("%d", &n);
    struct point *data;
    data=(struct point *)malloc(sizeof(point)*(n+10));
    for(i=0; i<n; i++)
        scanf("%lf %lf", &data[i].x, &data[i].y);
    ans=0;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
        {
            t=dis(data[i].x, data[i].y, data[j].x, data[j].y);
            if(t>ans) ans=t;
        }
    printf("%.4lf\n", ans);
    free(data);
    return 0;
}
