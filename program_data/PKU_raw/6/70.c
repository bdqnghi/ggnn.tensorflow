main()
{
  int *a,i,m,n,k,s=0,*b,j;
  scanf("%d",&k);
  b=(int *)calloc(k,sizeof(int));
  for(i=0;i<k;i++)
  {
     scanf("%d %d",&m,&n);
     a=(int *)calloc(m*n,sizeof(int));
     for(j=0;j<m*n;j++)scanf("%d",a+j);
     for(j=0;j<m;j++)
     { s=s+*(a+j*n)+*(a+j*n+n-1);
     }
     for(j=1;j<n-1;j++)
      s=s+*(a+j)+*(a+(m-1)*n+j);

     *(b+i)=s;
     free(a);
     s=0;
  }
  for(i=0;i<k;i++){
  printf("%d",*(b+i));
  if(i<k-1)printf("\n");}

}