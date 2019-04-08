void zero1(int *p,int n)
{
    int i,c;
    c=*p;
    for(i=1;i<n;i++)
    if(*(p+i)<c)
    c=*(p+i);
    for(i=0;i<n;i++)
    p[i]=p[i]-c;
}
void zero2(int **p,int n,int t)
{
    int i,c;
    c=*(*p+t);
    for(i=1;i<n;i++)
    if(*(*(p+i)+t)<c)
    c=*(*(p+i)+t);
    for(i=0;i<n;i++)
    *(*(p+i)+t)=*(*(p+i)+t)-c;
}
void cut(int **p,int n)
{
    int i,j;
    for(i=1;i<n-1;i++)
    for(j=0;j<n;j++)
    *(*(p+i)+j)=*(*(p+i+1)+j);
    for(i=1;i<n-1;i++)
    for(j=0;j<n;j++)
    *(*(p+j)+i)=*(*(p+j)+i+1);
}
int main()
{
    int n,m,i,j,w,c;
    int **p;
    scanf("%d",&m);
    p=(int **)malloc(m*sizeof(int *));
    for(i=0;i<m;i++)
    *(p+i)=(int *)malloc(m*sizeof(int));
    for(w=0;w<m;w++)
    {
        n=m;
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",*(p+i)+j);
        for(i=0;i<n;i++)
        zero1(p[i],n);
        for(i=0;i<n;i++)
        zero2(p,n,i);
        c=p[1][1];
        for(i=0;i<m-2;i++)
        {
            cut(p,n);
            n--;
            for(j=0;j<n;j++)
            zero1(p[j],n);
            for(j=0;j<n;j++)
            zero2(p,n,j);
            c+=p[1][1];
        }
        printf("%d\n",c);
    }
    for(i=0;i<n;i++)
    free(p[i]);
    free(p);
    return 0;
}