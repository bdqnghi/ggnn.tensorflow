int m,n,a[1000]={0},b[1000]={0};
int main()
{
    int i,j,k;
    void read(int array1[],int array2[]);
    void sort(int array[],int x);
    void print(int array5[],int array6[]);
    scanf("%d%d",&m,&n);
    read(a,b);
    sort(a,m);
    sort(b,n);
    print(a,b);
}
void read(int array1[],int array2[])
{
    int i;
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
}
void sort(int array[],int x)
{
    int i,j,k,t;
    for(i=0;i<x-1;i++)
        for(j=i+1;j<x;j++)
                if(array[
j]<array[i])
                    {t=array[i];array[i]=array[j];array[j]=t;}
}

void print(int array5[],int array6[])
{
    int j;
    for(j=0;j<m;j++)
    printf("%d ",array5[j]);
    for(j=0;j<n-1;j++)
    printf("%d ",array6[j]);
    printf("%d",array6[n-1]);
}
