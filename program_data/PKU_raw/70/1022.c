int main()
{
    int n,i,j;
    double x,y,s=0;
    double a[100000][2];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%lf %lf",&a[i][0],&a[i][1]);
         for(j=0;j<i;j++)
            {
                if(s<sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])))
                s=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])) ;                 
            }                     
    }
printf("%.4f\n", s);
getchar();getchar();getchar();
}
