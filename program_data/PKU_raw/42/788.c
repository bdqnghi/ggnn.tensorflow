struct stu
{
char num[20];
int score;
struct stu * next;
};
struct stu *del(struct stu *head,int num)
{
 struct stu *p1,*p2;
p1=head;
for(;p1!=NULL;)    //??????16???p1->next??p1->next->next
{if (num!=p1->score)
p2=p1;
else
{if(p1==head) head=p1->next;
else p2->next=p1->next;
}
p1=p1->next;
}
return head;
}
struct stu *creat(int k)
{
	struct stu *head,*p1,*p2;
	int j=0;
	p1=p2=(struct stu *)malloc(sizeof(struct stu));
	head=NULL;
	while(j<k)
	{         scanf("%d",&p1->score);
	j++;
	if(j==1) head=p1;
	else p2->next=p1;
	p2=p1;
	p1=(struct stu *)malloc(sizeof(struct stu));
	}
        p2->next=NULL;
	return head;
}
void print(struct stu *head)
{
struct stu *p;
p=head;
while(p!=NULL)
{
printf("%d",p->score);
p=p->next;if(p!=NULL) printf(" ");
}
}
void main()
{
	struct stu *head;
	int n,k;
	scanf("%d",&n);
	head=creat(n);
	scanf("%d",&k);
	head=del(head,k);
	print(head);
}

