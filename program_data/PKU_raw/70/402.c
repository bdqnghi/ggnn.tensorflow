int main(int argc, char *argv[])
{
    int n,i,j;
    double a[10000][2],m,b;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%lf%lf",&a[i][0],&a[i][1]);
        }
    m=(a[1][0]-a[0][0])*(a[1][0]-a[0][0])+(a[1][0]-a[0][0])*(a[1][0]-a[0][0]);
     for (i=0;i<n;i++)
     {
         for(j=i;j<n;j++)
         {
            b=(a[j][0]-a[i][0])*(a[j][0]-a[i][0])+(a[j][1]-a[i][1])*(a[j][1]-a[i][1]);
            if (b>m)
            m=b;
            }
            }
            printf ("%.4lf",sqrt(m));
            scanf ("%d",&i);
            return 0;
            }