main()
{ int a[50000],b[50000];
  int i,j,k,n,p,q,flag;
  scanf("%d",&n);
  for (i=0;i<n;i++)
  { a[i]=0; b[i]=0;}
  scanf("%d %d",&p,&q);
  while ((p+q)!=0)
  { a[p]++; b[q]++;
    scanf("%d %d",&p,&q);
   }
  for (i=0;i<n;i++)
    if ((a[i]==0)&&(b[i]==n-1)) {flag=1; printf("%d\n",i); }
  if (flag==0) printf("NOT FOUND");

}
  
