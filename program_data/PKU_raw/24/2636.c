void main()
{
	int n,i,j,k;
	char a[1000][50];
	int b[1000];
	int *p;
	char (*p1)[50];
	scanf("%d",&n);
	p=b;
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		*(p+i)=strlen(a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				k=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		k=strlen(a[i]);
		if(k==*(p+n-1)){printf("%s\n",a[i]);break;}
	}
	for(i=0;i<n;i++)
	{
		k=strlen(a[i]);
		if(k==*(p+0)){printf("%s",a[i]);break;}
	}
}

