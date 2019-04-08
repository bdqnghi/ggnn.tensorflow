int main(int argc, char* argv[])
{
	int n,m,*p,i;
	scanf("%d%d",&n,&m);
	p=(int*)malloc(2*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		if(i<m)
	    	*(p+i+n)=*(p+n-m+i);
		else
			*(p+i+n)=*(p+i-m);
	}
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		    printf("%d",*(p+n+i));
		else
			printf("%d ",*(p+n+i));
	}

	return 0;
}