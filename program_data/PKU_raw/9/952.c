struct sick
{
	char *num;
    int age;
	struct sick *next;
};
struct sick *range(int N)
{
	struct sick *pnew,*ppre,*p,*head,*last;
	pnew=(struct sick *)malloc(len);
	pnew->num=(char *)malloc(100*sizeof(char));
	pnew->next=NULL;
	scanf("%s %d",pnew->num,&pnew->age);
	head=last=pnew;
	int i;
	for(i=2;i<=N;i++)
	{
		pnew=(struct sick *)malloc(len);
	    pnew->num=(char *)malloc(100*sizeof(char));
	    pnew->next=NULL;
		scanf("%s %d",pnew->num,&pnew->age);
		int j;
		if (pnew->age<60)
		{
			last->next=pnew;
			last=pnew;
		}
		else
		{
			if(pnew->age>head->age)
			{
				pnew->next=head;
				head=pnew;
			}
			else
			{
				ppre=head;
				p=head->next;
				for(j=2;p!=NULL;j++)
				{
					if(pnew->age>p->age)
					{
						ppre->next=pnew;
						pnew->next=p;
						break;
					}
					else
					{
						ppre=ppre->next;
						p=p->next;
					}
				}
			}
			if(pnew->next==NULL)
			{
				last->next=pnew;
				last=pnew;
			}
		}
	}
	return(head);
}
void print(struct sick *head,int N)
{
	struct sick *p=head;
	int i;
	for(i=1;i<=N;i++)
	{
		printf("%s\n",p->num);
		p=p->next;
	}
}


	
void main()
{
	int N;
	scanf("%d",&N);
	struct sick *head=range(N);
	print(head,N);
}
