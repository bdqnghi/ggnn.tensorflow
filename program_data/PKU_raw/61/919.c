int main()
{
 int i,j,n,a[1000],m;
 a[1]=1;
 a[2]=1;
 for (i=3;i<30;i++)
 a[i]=a[i-1]+a[i-2];
 scanf("%d",&n);
 for (i=0;i<n;i++)
 {
 scanf("%d\n",&m);
 printf("%d\n",a[m]);
 }
}
