int bijiao(const void *x,const void *y)
{return *(int*)x-*(int*)y; 
}
main()
{int n,m,i,a[100],b[100];
scanf("%d %d",&n,&m);
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
for(i=0;i<=m-1;i++)
scanf("%d",&b[i]);
qsort(a,n,sizeof(a[0]),bijiao);
qsort(b,m,sizeof(b[0]),bijiao);
for(i=0;i<=n-1;i++)
printf("%d ",a[i]);
for(i=0;i<m-1;i++)
printf("%d ",b[i]);
printf("%d",b[m-1]);
}