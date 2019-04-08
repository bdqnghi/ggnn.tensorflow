  void hehe(int n,int m)
  {
  int a[300],b[300],c,i,j;
  for(i=1;i<=n;i++)
  a[i]=i;
  for(i=n;i>1;i--)
    {
	  c=(m%i);
	  for(j=c+1;j<=i;j++)
	  b[j-c]=a[j];
	  for(j=1;j<c;j++)
	  b[i-c+j]=a[j];
      for(j=1;j<i;j++)
	  a[j]=b[j];
	}
	printf("%d\n",a[1]);
}
  void main()
  {int n[15],m[15],i,j;
for(i=0;i<15;i++)
	{
		scanf("%d %d",&n[i],&m[i]);
		if(m[i]==0&&n[i]==0)
		break;
		else
		scanf("\n");
	}
    for(j=0;j<i;j++)
		hehe(n[j],m[j]);
  }
