void order(int m,int n)
{  int i,s[100];
  for(i=0;i<m;i++)
  scanf("%d",&s[i]);
  for(i=m-n;i<m;i++)
  printf("%d ",s[i]);
  for(i=0;i<m-n-1;i++)
  printf("%d ",s[i]);
  printf("%d",s[i]);
}
main()
{ int a,b;
  scanf("%d %d",&a,&b);
  order(a,b);
}

