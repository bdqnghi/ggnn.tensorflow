
void main()
{
    int i=1,n,k,m,j;
	scanf("%d %d",&n,&k);
    j=1;
abc: 
	m=j*n+k;
def:
	if(m%(n-1)==0&&i<n)
    {
	  m=m/(n-1)*n+k;
	  i=i+1;
	goto def;
	}
	if(m%(n-1)&&i<n)
	{
		i=1;
		j=j+1;
	goto abc;
	}
	if(i==n)
		printf("%d",m);

}