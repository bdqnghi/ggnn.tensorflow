              
struct student 
{
	char num[10];
    char s1[20];
	char sex;
	int age;
	char mark[20];
	char s2[20];
    struct student*next;
   
} *p1,*p2;//????????????????????????//

int n;

//????//

struct student * creat(void)
{
	struct student * head;
    n=0;
    p1 = p2 = (struct student * )malloc(LEN); 
    scanf("%s", p1->num);
   
    while(strcmp(p1->num,"end")!=0)//?????????//
	{
	    
		scanf ("%s %c %d %s %s", p1->s1,&p1->sex, &p1->age, p1->mark, p1->s2);//?????????????//
		n=n+1;
		if (n==1)
        {
			head=p1;//?????????//
		}
        else
        {
			p2->next=p1;
		}
        
        p2=p1;
        p1=(struct student *)malloc(LEN); 
        scanf("%s",p1->num);//??p1->num???while?????//
         
	}
	p2->next=NULL; 
	
	return(head);        
}//?????????????//

struct student * turnback(struct student * head)//??????//
{
	struct student * newhead = NULL;

	struct student * anew;//?????????????????//

    do{
		p2 = NULL;
		p1 = head;
    	while(p1->next !=NULL)
		{
			p2=p1;
			p1=p1->next;
		}  
		if(newhead==NULL)
		{
			newhead = p1;
		    anew = newhead->next = p2;//??anew????????//
		}
		
		anew = anew->next =p2;
		p2->next=NULL;

	}while(head->next !=NULL);

	return newhead;//??????????//
}
//??????//    
void print(struct student *head)
{
	struct student *p;
	p = head;
	if(p !=NULL)
    	do{
			printf("%s %s %c %d %s %s\n", p->num, p->s1, p->sex, p->age, p->mark, p->s2);
			p = p->next;

		}while(p !=NULL);
}
//???//                                                                                    
main()
{
	struct student *head;
	head = creat();

	head = turnback(head);//?????????????//

	print (head);//??????????/
   return 0;
   
}