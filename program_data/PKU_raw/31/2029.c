struct student{
	char xh[20];
	char name[20];
	char sex;
	int age;
	float score;
	char dizhi[30];
	struct student *next;
};
struct student *append(void)
{int n;
 struct student *head,*newnode,*thisnode=NULL;
 for (n=1;;n++)
 {newnode=(struct student*)malloc(sizeof(struct student));
  scanf("%s",&newnode->xh);
  if (newnode->xh[0]=='e')
     {head=thisnode;break;}
  else
     {scanf(" %s %c %d %f %s\n",&newnode->name,&newnode->sex,&newnode->age,&newnode->score,&newnode->dizhi);
      newnode->next=thisnode;
      thisnode=newnode;
     }
 }
 return head;
}
void main()
{struct student *p;
 for ( p=append();p!=NULL;p=p->next)
 {printf("%s %s %c %d %g %s\n",p->xh,p->name,p->sex,p->age,p->score,p->dizhi);
 
 }
}
