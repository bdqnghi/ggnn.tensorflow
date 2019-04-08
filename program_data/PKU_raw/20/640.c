void main()
{
	int i,j,p,n;
	j=0;
	char a[14],b[4];	while(scanf("%s%s",a,b)!=EOF)
	{
	n=strlen(a);
	for(i=0;i<n;i++)
		if(a[i]>a[j])
			j=i;
		p=j;
		for(i=n-1;i>j;i--)
			a[i+3]=a[i];
		a[p+3]=b[2];
		a[p+2]=b[1];
		a[p+1]=b[0];
		for(i=0;i<n+3;i++)
			printf("%c",a[i]);
		printf("\n");}
	
			
}