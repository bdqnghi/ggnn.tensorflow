struct book
{
	int num;
	char auth[26];
	struct book *next;
};
struct book *creat(int m)
{
	int i=0;
	struct book *head,*p1,*p2;
	if(i==0)
	{
		p1=(struct book*)malloc(sizeof(struct book));
		scanf("%d %s",&p1->num,p1->auth);
		head=p1;
		p2=p1;
		p1->next=NULL;
		i++;
	}
	while(i<m)
	{
		p1=(struct book*)malloc(sizeof(struct book));
		scanf("%d %s",&p1->num,p1->auth);
		p2->next=p1;
		p1->next=NULL;
		p2=p1;
		i++;
	}
	return (head);
}

int main()
{
	int m,i,lenth;
	int max=0,maxwh=27;
	int count[26]={0};
	struct book *head,*p;
	scanf("%d",&m);
	head=creat(m);
	p=head;
	while(p!=NULL)
	{
		lenth=strlen(p->auth);
		for(i=0;i<lenth;i++)
			count[(int)(p->auth)[i]-65]++;
		p=p->next;
	}
	for(i=0;i<26;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
			maxwh=i;
		}
	}
	printf("%c\n",maxwh+65);
	printf("%d\n",max);
	p=head;
	while(p!=NULL)
	{
		lenth=strlen(p->auth);
		for(i=0;i<lenth;i++)
		{
			if((int)(p->auth[i])==maxwh+65)
			{
				printf("%d\n",p->num);
				break;
			}
		}
		p=p->next;
	}
	return 0;
}
	
		