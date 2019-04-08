int n;
struct stu
{char num[10];
 char name[20];
 char sex;
 int age;
 float score;
 char add[30];
 struct stu *next;
};
struct stu *create() 
{
 struct stu *head, *p1,*p2;
 n=1;
 p1=(struct stu *)malloc(LEN);
 scanf("%s %s %c %d %f %s", &p1->num,&p1->name,&p1->sex,&p1->age,&p1->score,&p1->add); 
 p1->next=NULL;
 head = p1; 
 p2 = p1;
  do
  {
  	p1=(struct stu *)malloc(LEN);
    scanf("%s", &p1->num); 
    if (strcmp(p1->num,"end")==0) 
     {free(p1);break;}
    else 
	{
  	 scanf(" %s %c %d %f %s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->add); 
	 p1->next=NULL;	
	 p2->next = p1; 
	 p2 = p1;
	 n++;
    }
  }while (1);
  return head;
}
struct stu *del(struct stu *head)
{
    struct stu *p, *ppre;
	p=head;
	while (p&&p->next!=NULL) 
	{ ppre = p; p=p->next;}
	printf("%s %s %c %d %g %s\n", p->num,p->name,p->sex,p->age,p->score,p->add);
	ppre->next=NULL;
	free(p);
	return head;	
}
void main()
{
	struct stu *head;
	int i;
	head=create();
	for(i=0;i<n;i++)
	  head=del(head);
}
