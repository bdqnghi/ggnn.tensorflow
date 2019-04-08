int main()
{
	int n,i,j,k[505]={0},m,p=0;
	char a[505],b[505][7],c[505][7];
	scanf("%d\n%s",&n,a);
	for(i=0;a[i+n-1]!='\0';i++)
	{
		for(j=0;j<n;j++)
			b[i][j]=a[i+j];
		b[i][n]='\0';
	
	}
	m=strlen(a)-n+1;
	for(i=0;i<m;i++)
	{
		if(strcmp(b[i],"\0")!=0)
		{
			strcpy(c[p],b[i]);
			p++;
		}
		for(j=i+1;j<m;j++)
		{
			if(strcmp(c[p-1],b[j])==0)
			{
				k[p-1]++;
				strcpy(b[j],"\0");

			}
		}
	}
	int max=0;
	for(i=0;i<p;i++)
	{
		if(k[i]>max)
		{
			max=k[i];
		}
	}
	if(max+1==1)
	{printf("NO");return 0;}
	else
		printf("%d\n",max+1);
	for(i=0;i<p;i++)
	{
		if(k[i]==max)
			printf("%s\n",c[i]);
	}
	return 0;

	
}