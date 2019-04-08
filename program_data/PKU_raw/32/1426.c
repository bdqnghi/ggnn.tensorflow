void main()
{
 char a[200][200],b[200][200];
 int i,j,n,A[200],B[200],k;
 scanf("%d\n",&n);
 for(i=0;i<n;i++)
 {
  scanf("%s\n",&a[i]);
  scanf("%s\n",&b[i]);
  scanf("\n");
 }
for(i=0;i<n;i++)
 {
A[i]=strlen(a[i])-1;B[i]=strlen(b[i])-1;
for(j=A[i],k=B[i];k>0,k>=0;j--,k--)
{
 
 a[i][j]=a[i][j]-b[i][k]+48;
 
 while(a[i][j]<'0')
{a[i][j]+=10;
a[i][j-1]--;}
}
}
for(i=0;i<n;i++)
{printf("%s\n",a[i]);}
}
