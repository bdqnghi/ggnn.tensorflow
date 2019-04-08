// 1209.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
struct data
{
	char num[200],name[200],sex,add[200];
	int age;
	char score[200];
	struct data *next;
};

struct data *creat()
{
	struct data *head,*p1 = NULL,*p2 = NULL;
	int n=0;
	do{
		p2=p1;
		p1=(struct data*)malloc(sizeof(struct data));
		scanf("%s",p1->num);
		if(*p1->num=='e')
		{
			head=p2;
			free(p1);
			break;
		}
		scanf("%s %c %d %s %s\n",p1->name,&(p1->sex),&(p1->age),p1->score,p1->add);
		
		if(n==0) p1->next=NULL;
		if(n!=0) p1->next=p2;
		n=1;
	}
	while(1);
	return head;
}
void print(struct data *head)
{
	struct data *p;
	p=head;
	while(p)
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
		p=p->next;
	}
}

int main()
{
	struct data *head;
	head=creat();
	print(head);
	return 0;
}

