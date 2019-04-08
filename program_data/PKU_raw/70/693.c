int main(int argc, char *argv[])
{
  
    int i,j,n;
    double a[1000][2],max,b;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%lf%lf",&a[i][0],&a[i][1]);
    }
    max=0;
    for (i=0;i<n;i++)
    {
        for (j=i;j<n;j++)
        {
            b=(a[j][0]-a[i][0])*(a[j][0]-a[i][0])+(a[j][1]-a[i][1])*(a[j][1]-a[i][1]);
            if (b>max)
            max=b;
        }
    }
    printf ("%.4lf",sqrt(max));
    scanf ("%d",&i);
    return 0;
}