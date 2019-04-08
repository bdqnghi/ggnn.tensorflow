int main()
{
	int m,n,a[1000],l,i,j;
	while(1)
	{ scanf("%d %d",&n,&m);
	if((n==0)&&(m==0))
		break;
    for(i=1;i<=n;i++)
		a[i]=i;
	l=(m-1)%n+1;
	for(i=1;i<=n-1;i++)
	{    for(j=1;j<=n;j++)
	  if(j>=l)a[j]=a[j+1];
	  l=(l+m-2)%(n-i)+1;
	  
	  }
	printf("%d\n",a[1]);
	}
	return 0;
}