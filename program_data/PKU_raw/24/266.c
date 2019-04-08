void main()
{
	char c;
	int max,min;
	max=0;
	min=0;
	char *maxs;
	char *mins;
	char *temp;
	int i,k,p;
	maxs=(char*)malloc(1);
	mins=(char*)malloc(1);
	i=0;
	p=0;
	temp=(char*)malloc(sizeof(char)*30);
    c=getchar();
	while(c!='\n')
	{
		if (c!=' ')
		{
			*(temp+i)=c;
			i++;
		}
		else
		{
			if (p==0)
			{		
				free(mins);
				mins=(char*)malloc(sizeof(char)*(i+1));
				for (k=0;k<=i;k++) *(mins+k)=*(temp+k);
				min=i;
				p=1;

			}
			if (i>max)
			{
				free(maxs);
				maxs=(char*)malloc(sizeof(char)*(i+1));
				for (k=0;k<=i;k++) *(maxs+k)=*(temp+k);
				max=i;
			}
			if (i<min)
			{
				free(mins);
				mins=(char*)malloc(sizeof(char)*(i+1));
				for (k=0;k<=i;k++) *(mins+k)=*(temp+k);
				min=i;
			}
			i=0;
			free(temp);
			temp=(char*)malloc(sizeof(char)*30);
		}
		c=getchar();
	}
	if (i>max)
	{
		free(maxs);
		maxs=(char*)malloc(sizeof(char)*(i+1));
		for (k=0;k<=i;k++) *(maxs+k)=*(temp+k);
		max=i;
	}
	if (i<min)
	{
		free(mins);
		mins=(char*)malloc(sizeof(char)*(i+1));
		for (k=0;k<=i;k++) *(mins+k)=*(temp+k);
		min=i;
	}		
	for (k=0;k<max;k++) printf("%c",*(maxs+k));
	printf("\n");
	for (k=0;k<min;k++) printf("%c",*(mins+k));
}