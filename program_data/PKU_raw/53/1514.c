int main()
{   
	int a[301]={0},n,i,m,j;
  scanf("%d",&n);
    scanf("%d",&m);
	printf("%d",m);
	a[m]=1;
for (i=1;i<n;i=i+1)
{
  scanf("%d",&m);
  if (a[m]==0)  
  {
	  printf(",%d",m);
	  a[m]=1;
  }
}

  return 0;
}
