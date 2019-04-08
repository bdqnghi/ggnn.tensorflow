
typedef struct
{
       double x;
       double y;
} point;

int main (void)
{
    int n, i, j;
    double distance = 0, temp;
    
    scanf ("%i", &n);
    point p[n];
    for (i = 0; i < n; i++)
        scanf ("%lf %lf", &p[i].x, &p[i].y);
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++) {
            temp = sqrt ((p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y));
            distance = distance >= temp ? distance : temp;
        }
    printf ("%.4f\n", distance);
    
    return 0;
}
