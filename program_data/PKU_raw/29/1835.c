void main()
{
    float F_num(int n);
    int m,i=0,j=1;
    int c[1000];
    float sum=0.0;
    scanf("%d",&m);
    while (i<m)
    {
        scanf("%d",&c[i]);
        i++;
    }
    i=0;
    while(i<m)
    {
        while (j<c[i]+1)
        {
            sum+=(F_num(j+1)/F_num(j));
            //printf("%lf\n",F_num(j+1)/F_num(j));
            j++;
        }
        printf("%.3f\n",sum);
        sum=0.0;
        j=1;
        i++;
    }
    
}

float F_num(int n)
{
    int a=1,b=0,c,i=0;
    while (i<n+1)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return (c*1.0);
    
}