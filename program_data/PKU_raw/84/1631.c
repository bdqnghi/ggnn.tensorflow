main()
{int i,m,n,k,j;
 scanf("%d",&n);
 int *p=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
  scanf("%d",&p[i]);
 for(i=0;i<(n-1);i++)
  for(j=i+1;j<n;j++)
  { if(p[i]<p[j]) {k=p[i];p[i]=p[j];p[j]=k;}}
 printf("%d\n%d",p[0],p[1]);

}
