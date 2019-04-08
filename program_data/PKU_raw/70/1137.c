struct location
{
double x;
double y;
};
struct location a[1000];
int main ()
{
int n,i,j;
double max=0;
scanf ("%d",&n);
for (i=0;i<n;i++)
{
scanf ("%lf %lf",&a[i].x,&a[i].y); 
}

for (i=0;i<n;i++)
{for (j=0;j<n;j++)
{   
if (sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y))>max)
max= sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y));
}
}
printf ("%.4lf",max);
}