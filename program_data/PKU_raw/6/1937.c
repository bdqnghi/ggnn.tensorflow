void main()
{int i,j,k,m,n,x[10000],sum=0,*p;
 scanf("%d",&k);
 for (i=1;i<=k;i++)
 {scanf("%d%d",&m,&n);
  sum=0;
  for (p=x;p<x+m*n;p++)
	  scanf("%d",p);
  for (p=x;p<x+n;p++)
	  sum=sum+ *p;
  for (p=x+(m-1)*n;m!=1&&p<x+n*m;p++)
	  sum=sum+ *p;
  for (p=x+n;p<x+n*(m-1);p=p+n)
	  sum=sum+ *p;
  for (p=x+n+n-1;p<x+n*m-1;p=p+n)
	  sum=sum+ *p;
  printf("%d\n",sum);
}
}