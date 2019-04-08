struct distance
{
double x,y;
};
int main()
    {
    struct distance a[31];
    int n,i,j;
    double max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lf%lf",&a[i].x,&a[i].y);
    max=sqrt((a[0].x-a[1].x)*(a[0].x-a[1].x)+(a[0].y-a[1].y)*(a[0].y-a[1].y));
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            if(sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y))>max)
            max=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y));
        }
    printf("%.4lf\n",max);

    return 0;
}