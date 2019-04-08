struct people
{
    char a[10];
    float h;
};
int com1(const void *x,const void *y)
{
    return *(int *)x-*(int *)y;
}
int com2(const void *x,const void *y)
{
    return *(int *)y-*(int *)x;
}
int main()
{
    struct people p[40];
    int n,i,j,k;
    float m[40],f[40];
    scanf("%d",&n);
    j=0;
    k=0;
    for(i=0;i<n;i++)
    {
        scanf("%s %f",&p[i].a,&p[i].h);
        if(p[i].a[0]=='m')
        {
            m[j]=p[i].h;
            j=j+1;
        }
        else
        {
            f[k]=p[i].h;
            k=k+1;
        }
    }
    qsort(m,j,sizeof(m[0]),com1);
    qsort(f,k,sizeof(f[0]),com2);
    for(i=0;i<j;i++)
    {
        printf("%.2f ",m[i]);
    }
    for(i=0;i<k-1;i++)
    {
        printf("%.2f ",f[i]);
    }
    printf("%.2f",f[k-1]);
    return 0;
}
