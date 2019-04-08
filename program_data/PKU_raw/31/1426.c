main()
{
    struct inf
	{
	struct inf *pLate;
	char num[20];
	char nam[20];
	char gen;
	int old[20];
	int sco[20];
	char loc[20];
	struct inf *pNext;
	};
	int i,j,k;
	struct inf *pHeader;
	pHeader=(struct inf *)malloc(sizeof(struct inf));
	struct inf *p;
	struct inf *p1=NULL;
	p=pHeader;
	pHeader->pLate=NULL;
	for(i=0;;i++)
	{
		p->pNext=(struct inf *)malloc(sizeof(struct inf));
		p=p->pNext;
		p->pLate=p1;
		scanf("%s",p->num);
		if(p->num[0]=='e') 
		{
		    p->pNext=NULL;
			break;
		}
		else
		{
		scanf("%s %c %s %s %s",p->nam,&p->gen,p->old,p->sco,p->loc);
		p1=p;
		}
	}
	for(j=i;j>=1;j--)
	{
		p=p->pLate;
		printf("%s %s %c %s %s %s\n",p->num,p->nam,p->gen,p->old,p->sco,p->loc);
	}
	p=pHeader;
	struct inf *pd;
	for(k=0;k<=i;k++)
	{
		pd=p;
		p=p->pNext;
		free(pd);
	}
	free(p);	
}