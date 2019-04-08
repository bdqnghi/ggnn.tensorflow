
struct patient
{
       char ID[10];
       int age;
       struct patient *next;
};

struct patient *creat(void)
{
       struct patient *head;
       struct patient *p1,*p2;
       int num;
       scanf("%d",&num);
       p2=NULL;
       p1=(struct patient *)malloc(LEN);
       head=p1;
       while(num>0)
       {
                   p2=p1;
                   scanf("%s %d",&p1->ID,&p1->age);
                   p1=(struct patient *)malloc(LEN);
                   p2->next=p1;
                   num--;
       }
       p2->next=NULL;
       return(head);
}  
    
struct patient *sort(struct patient *head)
{
	struct patient *first; 
    struct patient *tail; 
	struct patient *p_max; 
	struct patient *max; 
	struct patient *p; 
	first = NULL;
	while (head != NULL) 
	{
		for(p=head,max=head; p->next!=NULL; p=p->next)
		{   
			if (p->next->age>max->age&&p->next->age>=60)
			{
				p_max = p;
				max = p->next;
			} 
		}
		if (first == NULL)
		{
			first = max;
			tail = max;
		}
		else
		{
			tail->next = max;
			tail = max;
		}
		if (max == head)
		{
			head = head->next;
		}
		else
		{
			p_max->next = max->next;
		}
	}
	if (first != NULL)
	{
		tail->next = NULL;
	}
	head = first;
	return head;
}
        
void print(struct patient *head)
{
     struct patient *p;
     p=head;
     while(p!=NULL)
     {
                   printf("%s\n",p->ID);
                   p=p->next;
     }               
}          
int main()
{
    struct patient *head;
    int n,i,j;
    head=creat();
    head=sort(head);
    print(head);
   }

/*?????????????????????????????????????a?b,??b??>a????b>=60????????
???????????????????????60+???60-?????????????????......*/
