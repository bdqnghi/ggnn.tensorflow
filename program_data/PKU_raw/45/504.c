void main()
{
	char a[50],b[50];
	char *m,*n,*k;
	int i,j,p;
	scanf("%s %s",a,b);
	n=a;
	for(m=b,i=0;*m!='\0';m++,i++)
	{
		j=0;
		if(*n==*m)
		{
			for(k=m;*n!='\0';n++,k++,j++)
				if(*k!=*n)
					break;
		}
		if(j==strlen(a))
		{
			p=i;
			break;
		}
	}
	printf("%d\n",p);
}