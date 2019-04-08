int main()
{
    int m,n,n1[100],n2[100],o[200];
    int *p1=&m,*p2=&n;
    void get(int *p1,int*p2,int m1[],int m2[]);
    void sort(int*p,int m[]);
    void cpy(int*p1,int*p2,int m1[],int m2[],int m[]);
    void put(int *p1,int*p2,int m[]);
    get(p1,p2,n1,n2);
    sort(p1,n1);
    sort(p2,n2);
    cpy(p1,p2,n1,n2,o);
    put(p1,p2,o);
    return 0;
}
void get(int *p1,int*p2,int m1[],int m2[])
{

    int i;
    scanf("%d%d",p1,p2);
    for(i=0;i<*p1;i++) scanf("%d",&m1[i]);
    for(i=0;i<*p2;i++) scanf("%d",&m2[i]);
}
void sort(int*p,int m[])
{
    int i,j,k;
    for(i=0;i<*p;i++)
    for(j=i+1;j<*p;j++)
    {
        if(m[i]>m[j])
        {
            k=m[i];
            m[i]=m[j];
            m[j]=k;
        }
    }
}
void cpy(int*p1,int*p2,int m1[],int m2[],int m[])
{
    int i,j;
    for(i=0,j=0;i<*p1;i++,j++) m[i]=m1[i];
    for(j=0;i<*p1+*p2;i++,j++) m[i]=m2[j];
}
void put(int *p1,int *p2,int m[])
{
    int i;
    printf("%d",m[0]);
    for(i=1;i<*p1+*p2;i++) printf(" %d",m[i]);
}
