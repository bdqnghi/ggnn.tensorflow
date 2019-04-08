void main()
{
	int a[300]={0};
	int i,j=0,n;
	char b[100000]={'\0'};
	gets(b);
	i=0;
	n=0;
	while(b[i])
	{
		if(i>0 && b[i]==' ' && b[i-1]!=' ') n++;
		else if(b[i]==' ') {i++;continue;}
		
		else {a[n]++;}
		i++;
	}
	j=0;
	for(i=0;i<=n;i++)
	{
		if(j==0) {j=1;printf("%d",a[i]);}
		else printf(",%d",a[i]);
	}
}

