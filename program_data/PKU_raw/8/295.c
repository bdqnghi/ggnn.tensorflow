int n,m;
int a[1000],b[1000];
void qsort(int l,int r)
{
    int i,j,k,x;
    i=l;j=r;
    k=0;
    x=a[(i+j)/2];
    while (i<=j)
    {
        while (a[i]<x) i++;
        while (x<a[j]) j--;
        if (i<=j)
        {
            k=a[i];a[i]=a[j];a[j]=k;
            i++;j--;
        }
    }
    if (i<r) qsort(i,r);
    if (l<j) qsort(l,j);
}

void qsort2(int l,int r)
{
    int i,j,k,x;
    i=l;j=r;
    k=0;
    x=(i+j)/2;
    while (i<j)
    {
        while (b[i]<b[x]) i++;
        while (b[x]<b[j]) j--;
        if (i<=j)
        {
            k=b[i];b[i]=b[j];b[j]=k;
            i++;j--;
        }
    }
    if (i<r) qsort2(i,r);
    if (l<j) qsort2(l,j);
}

void input()
{
    int i;
    cin >>n >>m;
    for (i=1;i<=n;i++)
        cin >>a[i];
    for (i=1;i<=m;i++)
        cin >>b[i];
}

void output()
{
    int i;
    for (i=1;i<=n;i++)
    cout <<a[i]<<" ";
    for (i=1;i<m;i++)
    cout <<b[i]<<" ";
    cout <<b[m]<<endl;
}

int main()
{
    input();
    qsort(1,n);
    qsort2(1,m);
    output();
    return 0;
}
