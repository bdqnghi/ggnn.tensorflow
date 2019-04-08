void main()
{
	int m,n,k,i,j=1;
	scanf("%d %d",&n,&k);
p:{
	  m=n*j+k;
	  for(i=1;i<n;i++)
	   	if((m-k)%n==0&&m*n%(n-1)==0)
			m=m*n/(n-1)+k;
		else
			break;
		if(i!=n)
		{
			j++;
			goto p;
		}
  }
  printf("%d",m);
}