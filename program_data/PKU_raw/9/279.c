int n;
struct ceshi
{
	char hao[20];
	int num;
	struct ceshi *next;
};

struct ceshi *charu (struct ceshi *head,struct ceshi *p1)
{
    struct ceshi *p2,*p;
    if (p1->num>=60)
    {
		if (head==Null)
        {head=p1;
        p1->next=Null;}
        else 
		{
        p2=head;
        while ((p1->num<=p2->num)&&(p2->next!=Null))
        {
            p=p2;
            p2=p2->next;
        }
        if (p1->num>=p2->num)
        {
            if (p2==head) {head=p1;p1->next=p2;}
            else {p->next=p1;p1->next=p2;}
        }
        else 
        {
            p2->next=p1;
            p1->next=Null;
	}
     }
    }
	else
	{
	    p=head;
		if (head==Null)
		{
		    head=p1;p1->next=Null;
		}
		else
		{while(p->next!=Null)
		{
		    p=p->next;
		}
		p->next=p1;
		p1->next=Null;}
	}
    return (head);
}

struct ceshi* create()
{
    struct ceshi *p1,*head,*p2;
    int i=0;
	head=Null;
    while (i<n)
    {
        i++;
		p1=(struct ceshi*)malloc(len);
        scanf("%s %d",p1->hao,&p1->num);
        head=charu(head,p1);
    }
    return(head);
}

void print(struct ceshi *head)
{
    struct ceshi *p;
    p=head;
    while(p!=Null)
    {printf("%s\n",p->hao);
    p=p->next;}
}

void main()
{
    struct ceshi *p;
	scanf("%d",&n);
    p=create();
    print(p);    
}
