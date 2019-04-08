struct student
{
	char num[100];
	char name[100];
	char gender[2];
	char age[100];
	char score[100];
	char add[100];
	struct student *next;
};

struct student *creat(void)
{
	struct student *head,*p1;
	head=NULL;
	while(1)
	{
		p1=(struct student*)malloc(LEN);
		scanf("%s",p1->num);
		p1->next=head;
		if(strcmp(p1->num,"end")==0)
			break;
		scanf("%s%s%s%s%s",p1->name,p1->gender,p1->age,p1->score,p1->add);
		head=p1;
	}
	return(head);
}
void print(struct student *head)
{
	struct student *p;
	p=head;
	while(p!=NULL)
	{
		printf("%s %s %s %s %s %s\n",p->num,p->name,p->gender,p->age,p->score,p->add);
		p=p->next;
	}
}
void main()
{
	struct student *po;
	po=creat();
	print(po);
}







/*?????????????????????????????????????? 

 
???? 
????????????????????? 
00630018 zhouyan m 20 10.0 28#460 

??????"end"??
 
???? 
???????? 

?? ?? ?? ?? ?? ?? 

???????
 
???? 
00630018 zhouyan m 20 10 28#4600
0063001 zhouyn f 21 100 28#460000
0063008 zhoyan f 20 1000 28#460000
0063018 zhouan m 21 10000 28#4600000
00613018 zhuyan m 20 100 28#4600
00160018 zouyan f 21 100 28#4600
01030018 houyan m 20 10 28#4600
0630018 zuyan m 21 100 28#4600
10630018 zouan m 20 10 28#46000
end

 
???? 
10630018 zouan m 20 10 28#46000
0630018 zuyan m 21 100 28#4600
01030018 houyan m 20 10 28#4600
00160018 zouyan f 21 100 28#4600
00613018 zhuyan m 20 100 28#4600
0063018 zhouan m 21 10000 28#4600000
0063008 zhoyan f 20 1000 28#460000
0063001 zhouyn f 21 100 28#460000
00630018 zhouyan m 20 10 28#4600*/

 
