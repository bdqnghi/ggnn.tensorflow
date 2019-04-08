struct student
	{
	char info[100];
	struct student *next;
	};
int n;
struct student*creat(void)
{struct student *head,*p1,*p2;
 p1=p2=(struct student*)malloc(LEN);
 gets(p1->info);
 p1->next=null;
 while(strcmp("end",p1->info)!=0)
	{head=p1;
	p1=(struct student*)malloc(LEN);	  
	  p1->next=p2;
	  p2=p1;
	  
	  gets(p1->info);
	}
 return(head);
}
void print(struct student*head)
{struct student*p;
 p=head;
 while(p!=null)
	{printf("%s\n",p->info);
     p=p->next;
	}
}
main()
{struct student*head;
 head=creat();
 print(head);
}
