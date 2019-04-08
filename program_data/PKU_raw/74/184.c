int main()
{
  int f(int a);
  int g(int a);
  int m,n;
  scanf("%d%d",&m,&n);
  int i,x=0;
  for(i=m;i<=n;i++)
  {
    if(f(i)==1&&g(i)==1)
    {
      printf("%d",i);
      x++;
      break;
    }
  }
  for(i=i+1;i<=n;i++)
  {
    if(f(i)==1&&g(i)==1)
    {
      printf(",%d",i);
      x++;
    }
  }
  if(x==0) printf("no");
return 0;
}
int f(int a)
{
  int i,k,l;
  k=sqrt(a);
  for(i=2;i<=k;i++)
  if(a%i==0) break;
  if(i>k) l=1;
  else l=0;
  return(l);
}
int g(int a)
{
  int i,x=0,j,k;
  for(i=0;i<=9;i++)
  {
	  if(a==i+10*i) x=1;
      for(j=0;j<=9;j++)
	  {
		  if(a==i+10*j+100*i) x=1;
		  if(a==i+10*j+100*j+1000*i) x=1;
		  for(k=0;k<=9;k++)
		  {
			  if(a==i+10*j+100*k+1000*j+10000*i) x=1;
		  }
	  }
  }
  return(x);
}