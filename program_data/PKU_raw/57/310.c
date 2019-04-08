int main()
{
	int k,i,j,p;
	char a[50][20];
	char b[]={'i','n','g','\0'};
	
	char c[4];
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%s",a[i]);
	for(i=0;i<k;i++)
	{
		p=strlen(a[i]);
		c[0]=a[i][p-3];
		c[1]=a[i][p-2];
		c[2]=a[i][p-1];
		c[3]='\0';
		if (strcmp(c,b)==0)
		{	for(j=0;j<p-3;j++)
				printf("%c",a[i][j]);
			printf("\n");
			
		}
			else 
			{	for(j=0;j<p-2;j++)
					printf("%c",a[i][j]);
				printf("\n");
			}
	}
	return 0;
}
			
	



