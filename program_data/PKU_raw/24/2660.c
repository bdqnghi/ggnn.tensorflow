

int main()
{
	int n;
	int i;
	int j;
	int index=0;
	scanf("%d%*c",&n);
	char **pS=NULL;
	char **pS2=NULL;
	char buffer[256];
	char *temp=NULL;
	pS=(char **)malloc(sizeof(char **)*n);
	pS2=(char **)malloc(sizeof(char **)*n);
	for(index=0;index<n;index++)
	{
		temp=buffer;
		while((*(temp++)=getchar())!=' ')
		{
			if(*(temp-1)=='\n')
				break;
		}

		*(temp-1)='\0';

		pS[index]=(char *)malloc(temp-buffer);
		pS2[index]=(char *)malloc(temp-buffer);
		strcpy(pS[index],buffer);
		strcpy(pS2[index],buffer);
	}
	
	char *intermedia=NULL;

	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
		{
			
			if(strlen(pS[j])<strlen(pS[j+1]))
			{
				intermedia=pS[j];
				pS[j]=pS[j+1];
				pS[j+1]=intermedia;
			}
		}

	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
		{
			if(strlen(pS2[j])>strlen(pS2[j+1]))
			{
				intermedia=pS2[j];
				pS2[j]=pS2[j+1];
				pS2[j+1]=intermedia;
			}
		}
	printf("%s\n%s",pS[0],pS2[0]);


	return 0;
}