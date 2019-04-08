int prime(int x)
{
  int i,m;
  double k;
  k=sqrt(x);
  for(i=2;i<=k;i++)
  {if(x%i==0)
  break;}
  if(i>k) m=1;
  else m=0;
  return m;
}
int round(int y)
{
  int a[10000],j,n,l,sum=0,c;
  for(j=0;y!=0;j++)
  {a[j]=y%10;
  y=y/10;}
  for(l=0;l<j;l++)
  {if(a[l]!=a[j-1-l])
   break;}
   if(l==j) n=1;
  else n=0;
  return n;
}
main()
{ int p,q,s,count=0;
  scanf("%d %d",&p,&q);
  for(s=p;s<=q;s++)
  {if(prime(s)==1&&round(s)==1)
   {count++;
   if(count==1)
   printf("%d",s);
   else if(count!=1)
   printf(",%d",s);}
  }
  if(count==0)
  printf("no\n");
  getchar();
  getchar();
  getchar();
}
