int m,n,a[100],b[100],c[200];

void enter(int array0[],int p)
{
int i;
for (i=0;i<p;i++)
scanf("%d",&array0[i]);
}

void sort(int array[],int p1)
{
int i,j,k;
for (i=0;i<p1-1;i++)
for (j=0;j<p1-1-i;j++)
if (array[j]>array[j+1])
{
k=array[j];
array[j]=array[j+1];
array[j+1]=k;
}
}

void paste(int array1[],int array2[])
{
int i;
for (i=0;i<m;i++)
c[i]=array1[i];
for (i=m;i<m+n;i++)
c[i]=array2[i-m];
}

void out(int array3[],int p2)
{
int i;
printf("%d",array3[0]);
for (i=1;i<p2;i++)
printf(" %d",array3[i]);
}

void main()
{
scanf("%d %d",&m,&n);
enter(a,m);
enter(b,n);
sort(a,m);
sort(b,n);
paste(a,b);
out(c,m+n);
}

