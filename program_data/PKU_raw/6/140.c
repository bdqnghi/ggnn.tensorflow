void f()
{
 int a=0,i,j,m,n,(*p)[100];
 scanf("%d %d",&m,&n);
 p=(int(*)[100])malloc(m*100*sizeof(int));
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   scanf("%d",*(p+i)+j);
 for(j=0;j<n;j++)
  a=a+*(*p+j)+*(*(p+m-1)+j);
 for(i=1;i<m-1;i++)
  a=a+*(*(p+i))+*(*(p+i)+n-1);
 printf("%d\n",a);
}
void main()
{
 int c,k;
 scanf("%d",&k);
 for(c=0;c<k;c++)
  f();
}
