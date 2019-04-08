int main()
{
	char (*p)[20];
	int i=0,ok=1;
	p=(char(*)[20])calloc(300,20*sizeof(char));
	while(scanf("%s",*(p+i))==1)
	{
		if (ok)
		{printf("%d",strlen(*(p+i)));ok=0;}
		else
			printf(",%d",strlen(*(p+i)));
		i++;
	}

  return 0;
}