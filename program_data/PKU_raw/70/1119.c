int main()
{
    int n,i,j;
    scanf("%d",&n);
    double a[100][2],temp,result=0;
    for(i=0;i<n;i++)
    scanf("%lf %lf",&a[i][0],&a[i][1]);
    for(i=0;i<n-1;i++)
    {
                    for(j=i+1;j<n;j++)
                    {
                    temp=(a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]);
                    if(result<temp) result=temp;
                    }
    }
    printf("%.4lf",sqrt(result));
}