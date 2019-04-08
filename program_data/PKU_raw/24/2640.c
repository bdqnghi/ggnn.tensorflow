void main()
{
	int n,i,j,k;
	char a[1000][50];
	int b[1000];
	int *p;
	char (*p1)[50];
	scanf("%d",&n);
	p=b;
	p1=a;
	for(i=0;i<n;i++)
	{
		scanf("%s",*(p1+i));
		*(p+i)=strlen(*(p1+i));
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
		k=strlen(*(p1+i));
		if(k==*(p+n-1)){printf("%s\n",*(p1+i));break;}
	}
	for(i=0;i<n;i++)
	{
		k=strlen(*(p1+i));
		if(k==*(p+0)){printf("%s",*(p1+i));break;}
	}
}



