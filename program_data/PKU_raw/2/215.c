int m;
struct book
{
	char num[20];
	char aut[20];
	struct book*next;
};
struct book*creat()
{
	struct book*head,*p1,*p2;
	int i;
	p1=(struct book*)malloc(LEN);
	scanf("%s %s",p1->num,p1->aut);
	p1->next=NULL;
	head=p1;
	p2=p1;
	for(i=1;i<m;i++)
	{
		p1=(struct book*)malloc(LEN);
	    scanf("%s %s",p1->num,p1->aut);
	    p1->next=NULL;
		p2->next=p1;
		p2=p1;
	}
	return(head);
}
void print(struct book*head)
{
	struct book*p;
	int*tem,i,k;
	char*q,max,c;
	tem=(int*)malloc(30*sizeof(int));
	for(i=0;i<30;i++)
	{
		*(tem+i)=0;
	}
	for(p=head;p;p=p->next)
	{
		q=p->aut;
		for(i=0;*(q+i)!='\0';i++)
		{
			c=*(q+i)-'A';
			*(tem+c)+=1;
		}
	}
	max=0;
	k=0;
	for(i=0;i<26;i++)
	{
		if(*(tem+i)>max)
		{
			max=*(tem+i);
			k=i;
		}
	}
	c=k+'A';
	printf("%c\n",c);
	printf("%d\n",max);
	for(p=head;p;p=p->next)
	{
		for(q=p->aut,i=0;*(q+i)!='\0';i++)
		{
			if(*(q+i)==c)
			{
				break;
			}
		}
		if(*(q+i)!='\0')
		{
			printf("%s\n",p->num);
		}
	}
}
int main()
{
	struct book*head;
	scanf("%d",&m);
	head=creat();
	print(head);
}
