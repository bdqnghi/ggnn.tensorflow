void convert(int n,int a[30])
{
 int i,t;
 for(i=n;i>1;i--)
 {
  t=a[i];
     a[i]=a[i-1];
     a[i-1]=t;
 }
}
void main()
{
 int m,n,i,j,a[30];
 scanf("%d %d",&m,&n);
 for(i=1;i<=m;i++)
  scanf("%d",&a[i]);
 for(j=0;j<n;j++)
  convert(m,a);
 for(i=1;i<=m;i++)
	 if(i==m)
		 printf("%d",a[i]);
	 else
  printf("%d ",a[i]);
}