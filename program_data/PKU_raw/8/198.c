int m,n;
void get (int a[200],int b[200])
{
 int i;
 scanf("%d %d",&m,&n);
 for (i=0;i<m;i++)
  scanf("%d",&a[i]);
 for (i=0;i<n;i++)
  scanf("%d",&b[i]);
}
void sequence (int a[200], int p)
{
 int i,j,temp;
 for (i=0;i<p;i++)
  for (j=i+1;j<p;j++)
   if (a[j]<a[i])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
  // printf("G");
}
void combine (int a[200],int p,int b[200],int q)
{
 int j;
 for (j=0;j<q;j++)
  a[p+j]=b[j];
}
void show (int a[200], int p)
{
 int i;
 for (i=0;i<p-1;i++)
 {
  printf("%d ",a[i]);
 }
 printf("%d",a[p-1]);
}
void main ()
{
 int a[200],b[200];
 get (a,b);
 sequence (a,m);
 sequence (b,n);
 combine (a,m,b,n);
 show (a,m+n);
}