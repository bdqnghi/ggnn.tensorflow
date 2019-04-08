
int main()
{
	struct book
	{
		int No;
		char author[27];
		int yes;
		struct book *next;
	};
	struct book*head,*p;
	int m,i,*max;
	int *count;
	count=(int*)malloc(26*sizeof(int));
	for(i=0;i<26;i++)
		*(count+i)=0;

	p=(struct book*)malloc(sizeof(struct book));
	head=p;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%s",&p->No,p->author);
		if(i==m-1) p->next=NULL;
		else p->next=(struct book*)malloc(sizeof(struct book));
		p=p->next;
	}
	
	p=head;
	while(p!=NULL)
	{
		char *point;
		point=p->author;
		while(*point!='\0')
		{
			(*(count+((*point)-65)))++;
			point++;
		}
		p=p->next;
	}

	max=count;
	for(i=0;i<26;i++)
		if(*(count+i)>*max) max=count+i;
	printf("%c\n",max-count+65);
	printf("%d\n",*max);

	p=head;
	while(p!=NULL)
	{
		char *point;
		point=p->author;
		while(*point!='\0')
		{
			if(*point==max-count+65) printf("%d\n",p->No);
			point++;
		}
		p=p->next;
	}
	return 0;
}