void main()
{
	int i,j,k,m,n,a[100]={0};
	char s[1000],c;
	gets(s);
	i=0;
	for(k=0;s[k]!='\0';k++)
	{
		if(s[k]!=' ')
		{
			a[i]++;
			if(s[k+1]==' ')
			i++;
		}	
	}
	//printf("%d",i);
	m=i+1;
	printf("%d",a[0]);
	for(i=1;i<m;i++)
		printf(",%d",a[i]);

}
