void main()
{
	int i=0,k=0,b[300],n,c[300];
	char a[3000];
	gets(a);
	n=strlen(a);
	c[0]=-1;
	for(i=0;i<n;i++)
	{
		if(a[i]!=' '&&a[i+1]==' ') {b[k]=i-c[k];k++;}
		if(a[i]==' '&&a[i+1]!=' ') c[k]=i;
	}
	b[k]=n-c[k]-1;
	for(i=0;i<k;i++) printf("%d,",b[i]);
	printf("%d\n",b[k]);
}


