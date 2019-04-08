int main()
{
    int k;
    scanf("%d", &k);
    int i;
    int n[1000],j,m;
    double x[1000];
    double sum=0;
    double aver,total=0;
    double out;
    for(i=1;i<=k;i++)
    {
                     scanf("%d",  &*(n+i));
                     for(j=1;j<=*(n+i);j++)
                     {
                                         scanf("%lf", &*(x+j));
                                         sum=sum+*(x+j);
                     }
                     aver=(double)sum/ *(n+i);
                     for(m=1;m<=*(n+i);m++)
                     {
                                         total=total+(aver-*(x+m))*(aver-*(x+m));
                     }
                     out=sqrt(total/ *(n+i));
                     printf("%.5lf\n", out);
                     sum=0;
                     total=0;
    }
    return 0;
}
                                         
