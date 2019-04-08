void main()
{
	char c[2000];
	gets(c);
	int i,l,n=2;
	l=strlen(c);
	for(i=0;i<=l-1;i++) if(c[i]==' ') n++;
	int*p=(int*)calloc(n,sizeof(int));
	*p=-1;
	int j;
	j=1;
	for(i=0;i<=l-1;i++) 
	{
		if(c[i]==' ')
		{
			*(p+j)=i;
			j++;
		}
	}
	*(p+j)=l;
	int*p1=(int*)calloc(n-1,sizeof(int));
	for(i=0;i<=n-2;i++) *(p1+i)=*(p+i+1)-*(p+i)-1;
	int max,min,smax,smin;
	max=0;
	min=2000;
	for(i=0;i<=n-2;i++)
	{
		if(*(p1+i)>max)
		{
			max=*(p1+i);
			smax=*(p+i)+1;
		}
		if(*(p1+i)<min)
		{
			min=*(p1+i);
			smin=*(p+i)+1;
		}
	}
	for(i=0;i<=max-1;i++) printf("%c",c[smax+i]);
	printf("\n");
	for(i=0;i<=min-1;i++) printf("%c",c[smin+i]);
	printf("\n");
}