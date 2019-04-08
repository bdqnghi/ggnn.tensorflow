void main()
{
	int n,a[100],i,j,p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			if(*(a+j)==*(a+i)) break;
		if(j>=i) {
			if(p>0) printf(",");
			printf("%d",*(a+i));
			p++;}
	}
}

