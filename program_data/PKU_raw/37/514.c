
void check(char *p)
{
	char *pp;
	int i,sum,kk=0;
	char *q;
	q=(char*)malloc(26*sizeof(char));
	for(i=0;i<26;i++)
		*(q+i)=i+97;
	int *qq,*s;
	qq=(int *)malloc(26*sizeof(int));
	s=qq;
	for(i=0;i<26;i++)
	{
        *(s+i)=0;
		for(pp=p;*pp!='\0';pp++)
		{
			if(*pp==*(q+i))
			(*(s+i))++;
		}
	}
	for(pp=p;*pp!='\0';pp++)
	{
		if(*(qq+*pp-97)==1) {kk=1;printf("%c\n",*pp);break;}
	}
	if(kk!=1) printf("no\n");
}



	
		


void main()
{
	int n;
	scanf("%d",&n);
	char *p[100],a[100][100000];
	int i;
	for(i=0;i<n;i++)
		*(p+i)=*(a+i);
	for(i=0;i<n;i++)
	{
		scanf("%s",*(p+i));
	}
	for(i=0;i<n;i++)
	{
		check(*(p+i));
	}
}

  


