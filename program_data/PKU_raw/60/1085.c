int main()
{
	int n,i,j,k,m,p,q;
	scanf("%d",&n);
	k=0;
	m=0;
	q=0;
	for(i=3;i<n-1;i=i+2)
	{
		for(j=3;j<i;j++)
		{
			if (i%j==0) k++;
			p=i+2;
			if (p%j==0) m++;
		}
		if (k==0 && m==0)
		{
			printf("%d %d\n",i,i+2);
			q++;
		}
		
		k=0;
		m=0;
		continue;
	}
	
	if(q==0) printf("empty");
	return 0;
}
 
