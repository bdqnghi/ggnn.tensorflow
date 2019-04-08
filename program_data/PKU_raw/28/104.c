void main()
{	char c[300][20]={{'\0'}};
	int i;
	scanf("%s",c[0]);
	for(i=1;getchar()!='\n';i++)
		scanf("%s",c[i]);
	printf("%d",strlen(c[0]));
	for(i=1;c[i][0]!='\0';i++)	
	printf(",%d",strlen(c[i]));
}