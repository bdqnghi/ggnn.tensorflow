struct Patient 
{
	char num[10];
	int age;
	struct Patient *next;
};
int main()
{
	void paixu(int n,struct Patient *head);
	struct Patient *creat(int n);
	int n,i;
	struct Patient *head;
	scanf("%d",&n);
	head=creat(n);
	paixu(n,head);
	for(i=0;i<n;i++)
	{
		printf("%s\n",head->num);
		head=head->next;
	}
	
}
struct Patient *creat(int n)
{
	int i;
	struct Patient *head,*thispoint,*nextpoint;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			nextpoint=(struct Patient *)malloc(sizeof(struct Patient));
			scanf("%s %d",nextpoint->num,&nextpoint->age);
			head=nextpoint;
			thispoint=head;
		}
		else
		{
			nextpoint=(struct Patient *)malloc(sizeof(struct Patient));
			scanf("%s %d",nextpoint->num,&nextpoint->age);
			thispoint->next=nextpoint;
			thispoint=nextpoint;
		}
	}
	thispoint->next=NULL;
	return head;
}
void paixu(int n,struct Patient *head)
{
	int i,j,k,count;
	struct Patient *p1,*p2,*p3,*p4;
	char tempnum[10],tempnum3[10],tempnum4[10];
	int tempage,tempage3,tempage4;
	p1=head;
	for(i=0;i<n-1;i++)
	{
		if(p1->age<60)
		{
			p2=p1->next;
			for(j=i+1;j<n;j++)
			{
				if(p2->age>59)
				{
					strcpy(tempnum,p2->num);tempage=p2->age;
					p3=p1;p4=p3->next;
					for(k=i;k<j;k++)
					{
						strcpy(tempnum4,p4->num);tempage4=p4->age;
						if(k==i){strcpy(p4->num,p3->num);p4->age=p3->age;}
						else {strcpy(p4->num,tempnum3);p4->age=tempage3;}
						strcpy(tempnum3,tempnum4);tempage3=tempage4;
						p3=p3->next;p4=p4->next;
					}
					strcpy(p1->num,tempnum);p1->age=tempage;
					break;
				}
				else p2=p2->next;
			}
		}
		p1=p1->next;
	}
	p1=head;
	for(i=0,count=0;i<n;i++)
	{
		if(p1->age>59){count++;}
		p1=p1->next;
	}
	p1=head;
	for(i=1;i<count;i++)
	{
		p2=p1;
		for(j=0;j<count-i;j++)
		{
			p3=p2->next;
			if(p2->age<p3->age)
			{
				strcpy(tempnum,p2->num);tempage=p2->age;
				strcpy(p2->num,p3->num);p2->age=p3->age;
				strcpy(p3->num,tempnum);p3->age=tempage;
			}
			p2=p2->next;
		}
	}
}
