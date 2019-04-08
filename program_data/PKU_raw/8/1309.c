int n1;int n2;int i;int a[100]={0};int b[100]={0};int c[200]={0};
void scanfing(/*n1,n2,i,a[100],b[100]*/)
{
     scanf ("%d %d",&n1,&n2);
     scanf ("%d",&a[0]);
     for (i=1;i<n1;i++) scanf (" %d",&a[i]);
     scanf ("%d",&b[0]);
     for (i=1;i<n2;i++) scanf (" %d",&b[i]);
}
int compare(const void* elem1,const void* elem2)
{
    return (*(int*)elem1-*(int*)elem2);
}
void qsorting(/*n1,n2,a[100],b[100]*/)
{
     qsort (a,n1,sizeof(int),compare);
     qsort (b,n2,sizeof(int),compare);
}
void together(/*n1,n2,a[100],b[100],c[200],i*/)
{
     for (i=0;i<n1;i++) c[i]=a[i];
     for (i=0;i<n2;i++) c[i+n1]=b[i];
}
void printfing(/*n1,n2,c[200]*/)
{
     printf ("%d",c[0]);
     for (i=1;i<n1+n2;i++)
     printf (" %d",c[i]);
}
int main()
{
    scanfing (/*n1,n2,i,a[100]={0},b[100]={0}*/);
    qsorting (/*n1,n2,a[100],b[100]*/);
    together (/*n1,n2,a[100],b[100],c[200],i*/);
    printfing (/*n1,n2,c[200]*/);
}