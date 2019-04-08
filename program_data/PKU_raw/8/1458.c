int main()
{
    int *input(int n),*a,*b,*c,n1,n2;
    void paixu(int *a,int n),display(int *c,int n);
    int *hebing(int *a,int *b,int n1,int n2);
    scanf("%d %d",&n1,&n2);
    a=input(n1);
    b=input(n2);
    printf("\n"); 
    paixu(a,n1);
    paixu(b,n2);
    c=hebing(a,b,n1,n2);
    display(c,n1+n2);
    return 0;
}

int *input(int n)
{
    int *p,i;
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
                    scanf("%d",&p[i]);
    }
    return (p);
}

void paixu(int *a,int n)
{
     int i,j,t;
     for(i=0;i<n;i++)
     {
                     for(j=i;j<n;j++)
                     {
                                     if(a[j]<a[i])
                                     {
                                                  t=a[j];
                                                  a[j]=a[i];
                                                  a[i]=t;
                                     }
                     }
     }
}

int *hebing(int *a,int *b,int n1,int n2)
{
     int *p,i,j;
     p=(int*)malloc((n1+n2)*sizeof(int));
     for(i=0;i<n1;i++)
     {
                      p[i]=a[i];
     }
     for(j=0;j<n2;j++)
     {
                      p[n1+j]=b[j];
     }
     return (p);
}

void display(int *c,int n)
{
     int i;
     for(i=0;i<n;i++)
     {
                     if(i) printf(" ");
                     printf("%d",c[i]);
     }
}