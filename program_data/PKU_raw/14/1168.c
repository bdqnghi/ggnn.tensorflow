struct score
{int num;
 int yuwen;
 int shuxue;
 int total;
 struct score*next;
};
int n;

struct score*creat()
{struct score*p1,*p2,*head;
 head=p2=(struct score*)malloc(len);
 scanf("%d%d%d",&p2->num,&p2->yuwen,&p2->shuxue);
 p2->total=p2->shuxue+p2->yuwen;
 n--;
 while(n--)
	{p1=(struct score*)malloc(len);
     scanf("%d%d%d",&p1->num,&p1->yuwen,&p1->shuxue);
     p1->total=p1->shuxue+p1->yuwen;
	 p2->next=p1;
	 p2=p1;
	}
 p2->next=NULL;
 return head;
}

void search(struct score*head)
{struct score*p;int i,max;
 for(i=0;i<3;i++)
	{max=0; 
	 p=head;
	  while(p!=NULL)
		{
		if(p->total>max)max=p->total;
		p=p->next;
		}
     p=head;
	 while(p!=NULL)
	 {if(p->total==max)
		{printf("%d %d\n",p->num,p->total);
		 p->total=0;
		 break;
		}
	     p=p->next;	 
	 }
	}
}

main()
{scanf("%d",&n);
 struct score*head;
 head=creat();
search(head);
}