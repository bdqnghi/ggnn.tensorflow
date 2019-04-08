void main()
{
	char *p[100],end='\n';
	int i,count;
	for(i=0;;i++)
	{
		p[i]=(char *)malloc(20*sizeof(char));
		scanf("%s",p+i);
		if(end==getchar()) 
		{
			count=i;
			break;
		}
	}
	for(i=count;i>0;i--)
		printf("%s ",p+i);
	printf("%s",p+i);
}