void main()
{
	char*p1,*p2,*a,*b,c;
	int i,j,k,n;
do
	{
	p1=(char*)malloc(100*sizeof(char));
	p2=(char*)malloc(100*sizeof(char));
	a=(char*)malloc(200*sizeof(char));
	b=(char*)malloc(200*sizeof(char));
	
	strcpy(a," ");
	strcpy(b," ");
	for(i=0,c=*(p1),k=0;*(p1+i)!='\0';i++)
	{
		if(*(p1+i)>c)
		{
			c=*(p1+i);
			k=i;
		}
	}
	strncpy(a,p1,k+1);
	*(a+k+1)='\0';
	strcat(a,p2);
	for(i=k+1,j=0;*(p1+i)!='\0';i++,j++)
	{
		*(b+j)=*(p1+i);
	}
	*(b+j)='\0';
	strcat(a,b);
	puts(a);
	free(a);
	free(b);
	free(p1);
	free(p2);
	}while(scanf("%s%s",p1,p2)!=EOF);
}
