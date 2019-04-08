void main()
{
	int i=0,j,n,b,a[300];
	char d,c[10000];
	b=0;
	scanf("%s",c);
	for(j=0;j<strlen(c);j++)
	{d=c[j];
	
	if(d==','){
		a[i++]=b;b=0;}
	else {b=b*10+(int)d-48;}
	}
	a[i++]=b;
	n=i;
	b=0;
	for(i=0;i<n;i++)if(a[i]>b)b=a[i];
	j=0;
	for(i=0;i<n;i++)if(a[i]>j&&a[i]<b)j=a[i];
	if(j==0)printf("No");
	else printf("%d",j);
}

		