int com1(const void *e1,const void*e2)
{
    float *p1,*p2;
    int x=0;
    p1=(float *)e1;
    p2=(float *)e2;
    if ((*p1)>(*p2)) x=1;
    if ((*p1)<(*p2)) x=-1; 
    return x;
}
int com2(const void *e1,const void*e2)
{
    float *p1,*p2;
    int x=0;
    p1=(float *)e1;
    p2=(float *)e2;
    if ((*p1)>(*p2)) x=-1;
    if ((*p1)<(*p2))x=1; 
    return x;
}
int main()
{
    int i,j=0,k=0,n;
    float *a,*b;
    char c[10];
    float d;
    scanf("%d",&n);
    a=(float *)malloc(n*sizeof(int));
    b=(float *)malloc(n*sizeof(int));
    for (i=0;i<n;i++)
    {
         scanf("%s %f",c,&d);
         if (strlen(c)==4)  {a[j]=d;j++;}
         else {b[k]=d;k++;}         
    }
    for(i=j;i<n;i++)    a[i]=6;
    for (i=k;i<n;i++)   b[i]=0;
    qsort(a,n,sizeof(float),com1);
    qsort(b,n,sizeof(float),com2);
    printf("%.2f",a[0]);
    for (i=1;i<j;i++)  printf(" %.2f",a[i]);
    for (i=0;i<k;i++)  printf(" %.2f",b[i]);
    getchar();
    getchar();
    getchar();
    return 0;
}
