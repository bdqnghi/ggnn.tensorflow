void main()
{
	char *s,*a,*b,*p,*w[100];
	int i,j,k;
	s=(char *)malloc(100*sizeof(char));
	a=(char *)malloc(100*sizeof(char));
	b=(char *)malloc(100*sizeof(char));
	for(i=0;i<100;i++)
	{
		*s='\0';
		*a='\0';
		*b='\0';
	}
	gets(s);
	scanf("%s",a);
	scanf("%s",b);
	w[0]=(char *)malloc(100*sizeof(char));
	for(j=0;j<100;j++)
		*(w[0]+j)='\0';
	i=0;j=0;
	for(p=s;*p!='\0';p++)
	{
		if(*p!=' ')
		{
		    *(w[i]+j)=*p;
			j++;
		}
		else
		{
			i++;
			w[i]=(char *)malloc(100*sizeof(char));
			for(j=0;j<100;j++)
		        *(w[i]+j)='\0';
			j=0;
		}
	}
	k=i;
	for(i=0;i<k;i++)
	{
		if(strcmp(w[i],a)==0)
			strcpy(w[i],b);
		for(j=0;*(w[i]+j)!='\0';j++)
	        printf("%c",*(w[i]+j));
		printf(" ");
	}
	if(strcmp(w[k],a)==0)
		strcpy(w[k],b);
	for(j=0;*(w[k]+j)!='\0';j++)
	    printf("%c",*(w[k]+j));
	printf("\n");
}