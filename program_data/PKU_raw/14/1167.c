struct student
	{
	int number;
	int yuwen;
	int shuxue;
    int sum;
	struct student *next;
	};
int n;
struct student*creat(void)
{struct student*head,*p1,*p2;
 scanf("%d",&n);
 p1=p2=(struct student*)malloc(LEN);
 scanf("%d%d%d",&p1->number,&p1->yuwen,&p1->shuxue);
 p1->sum=p1->yuwen+p1->shuxue;
 head=p1;
 int i;
 for(i=1;i<n;i++)
	{
	p1=(struct student*)malloc(LEN);
	p2->next=p1;
	p2=p1;
	scanf("%d%d%d",&p1->number,&p1->yuwen,&p1->shuxue);
    p1->sum=p1->yuwen+p1->shuxue;
	}
 p2->next=null;
 return head;
}
void compare(struct student*head)
{int max,i;
 struct student*p;
 for(i=1;i<=3;i++)
	{max=0;
     p=head;
	 while(p!=null)
		{if(p->sum>max)max=p->sum;
	     p=p->next;
		}
	 p=head;
     while(p!=null)
		{if(p->sum==max)
			{printf("%d %d\n",p->number,max);
			p->sum=0;		
			break;
			}	
	     p=p->next;
		}
	}
}
main()
{struct student*head;
 head=creat();
 compare(head);
}
