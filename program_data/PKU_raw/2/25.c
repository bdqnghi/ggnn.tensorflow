struct shu
{
	char xh[100];                      /*??*/
	char zz[100];
	struct shu * next;
};

int num[26]={0},m;
struct shu *creat(int n)
{
	int i=0;
	struct shu *p1,*p2,*head;
	p1=p2=(struct shu *)malloc(sizeof(struct shu ));
    head=0;
    while(i<n)
	{
		i++;
		if(i==1)
		{
			p1->next=0;
			head=p1;
		}
		else
		{
			p2=p1;
			p1=(struct shu *)malloc(sizeof(struct shu ));
			p1->next=p2->next;
			p2->next=p1;
		}
		scanf("%s %s",p1->xh,p1->zz);
	}
	return head;
}
void max(struct shu *head)
{
	struct shu *p;
	char *f;
	int i,zd=0;
	for(p=head;p!=0;p=p->next)     /*??p++*/
	{
		for(f=p->zz;*f!='\0';f++)
		{
			num[*f-65]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(num[i]>zd)
		{
			zd=num[i];
			m=i;
		}
	}
	printf("%c\n",65+m);
	printf("%d\n",zd);            /*???????*/
}

void print(head)
{
	struct shu *p;
	char *f;
	for(p=head;p!=0;p=p->next)                 /*????p++*/
	{
		for(f=p->zz;*f!='\0';f++)
		{
			if(*f==65+m)
			{
				printf("%s\n",p->xh);
				break;
			}
		}
	}
}

	


void main()
{
	int n;
	struct shu *head;
	scanf("%d",&n);
	head=creat(n);
	max(head);
    print(head);
}
