
struct student{
	char name[27];
	int anum;
	int num;
	struct student *next;
};
int n;
int i;
char c;

struct student *creat()
{
	struct student *head;
	head=(struct student *)malloc(LEN);
	if(n==0)
		head=NULL;
	else
	{
		scanf("%d",&head->num);
		for(i=0;(c=getchar())!='\n';i++)
		{
			head->name[i]=c;
		}
		head->anum=i;		
		head->next=NULL;
	}
	return(head);
}


int main()
{
	struct student *head,*p1,*p2,*p;
	char l[200]={0};
	int j;
	int max=0;
	int lmax;


	scanf("%d",&n);
	head=creat();
	p1=p2=head;

	for(i=1;i<n;i++)
	{
		{
			p1=(struct student *)malloc(LEN);
			p2->next=p1;
			p2=p1;

			scanf("%d",&p2->num);
			for(j=0;(c=getchar())!='\n';j++)
			{
				p2->name[j]=c;
			}
			p2->anum=j;

			p2->next=NULL;
		}
	}

	p=head;
	for(j=0;j<n;j++)
	{
		for(i=0;i<p->anum;i++)
		{
			l[p->name[i]]=l[p->name[i]]+1;
		}
		p=p->next;
	}



	for(i=65;i<=90;i++)
	{
		if(l[i]>max)
		{
			max=l[i];
			lmax=i;
		}

	}
	printf("%c\n%d\n",lmax,max);

	p=head;
	for(j=0;j<n;j++)
	{
		for(i=0;i<p->anum;i++)
		{
			if(p->name[i]==lmax)
				printf("%d\n",p->num);
		}
		p=p->next;
	}


	return 0;
}

