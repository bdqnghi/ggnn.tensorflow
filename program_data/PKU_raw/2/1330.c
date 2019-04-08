struct books
{
	int num;
	char name[100];
	struct books *next;
};
struct books * create(int n)
{
	struct books *head,*p1,*p2;
	p1=(struct books*)malloc(Len);
	scanf("%d %s",&p1->num,p1->name);
	p1->next=NULL;
	head=p1;
	p2=p1;
	while(--n)
	{
		p1=(struct books*)malloc(Len);
		scanf("%d %s",&p1->num,p1->name);
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
	}
	return head;
}
void main()
{
	int n,i,max,k;
    char *p;
	int num[26]={0};
	char name[26]={'A','B','C','D','E','F','G','H','I','J','K','L',
		'M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	struct books *p1,*head;
	scanf("%d",&n);
    head=create(n);
	p1=head;
	for(i=0;i<26;i++)
	{
		p1=head;
		p=p1->name;
		do
		{

			if(*p==name[i])
			{
				num[i]++;
				p1=p1->next;
				p=p1->name;
			}
			else
			{
				if(*p=='\0')
				{
					p1=p1->next;
					p=p1->name;
				}
				else
				{
					p++;
				}
			}
		}while(p1!=NULL);
	}
	max=num[0];
	for(i=0;i<26;i++)
	{
		if(num[i]>=max)
		{
			k=i;
			max=num[i];//???????num[i]??max??????max????????????25
		}
	}
	printf("%c\n",name[k]);
	printf("%d\n",num[k]);
	p1=head;
	p=p1->name;
	while(p1!=NULL)
	{
		
		if(*p==name[k])
		{
			printf("%d\n",p1->num);
			p1=p1->next;
			p=p1->name;
		}
		else
		{
			if(*p=='\0')
			{
				p1=p1->next;
				p=p1->name;
			}
			else
			{
				p++;
			}
		}
	}
}