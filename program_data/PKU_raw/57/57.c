
void main()
{
	int i,j,n,a;
	char c[20][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",c[i]);
	for(i=0;i<n;i++)
	{   a= strlen(c[i]);
		if(c[i][a-1]=='r' || c[i][a-1]=='y')
			for(j=0;j<a-2;j++)
			printf("%c",c[i][j]);
			printf("\n");
			if(c[i][a-1]=='g')
				for(j=0;j<a-3;j++)
					printf("%c",c[i][j]);
				printf("\n");
				}
}




	







