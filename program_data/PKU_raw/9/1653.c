


int old=0;

struct seqs//????
{
	char id[11];
	int age;
	struct seqs *next;
};


struct seqs *build(int l)//?????????l
{
	int i;
    struct seqs *head,*newnode,*p;
	head=(struct seqs *)malloc(len);//???????
    scanf("%s %d",head->id,&head->age);//????????
	p=head;//???p??????
	if(head->age>=60)
		old++;
    for(i=1;i<l;i++)//???????????????????
	{
        newnode=(struct seqs *)malloc(len);//?????
        scanf("%s %d",newnode->id,&newnode->age);//??????
		if(newnode->age<60)
		{
		    p->next=newnode;//??????????
		    p=newnode;//???p??????
		}
		else
		{
			old++;
			newnode->next=head;
			head=newnode;
		}
	}
	p->next=NULL;//????????
	return head;
}

struct seqs *rebuild(struct seqs *headx)//????
{
	int i;
    struct seqs *head,*newnode,*p,*px;

	newnode=(struct seqs *)malloc(len);  newnode->next=NULL;//????????	
    strcpy(newnode->id,headx->id);
	newnode->age=headx->age;//????????????
	p=newnode;//???p?????????
    px=headx->next;
    for(i=1;i<old;i++)//???????????????????
	{
        newnode=(struct seqs *)malloc(len);//?????
		strcpy(newnode->id,px->id);
		newnode->age=px->age;
		newnode->next=p;//??????????
		p=newnode;//???p??????
		px=px->next;
	}
	head=p;//??head
	return head;
}
void bubble(struct seqs *head,int l)
{
	struct seqs *p; 
	int i,j,temp;
	char t[11]={0}; 
	for(i=1;i<l;i++)
		for(p=head,j=0;j<l-i;j++,p=p->next)
			if(p->age < p->next->age)
	 		{
                strcpy(t,p->id);
				strcpy(p->id,p->next->id);
                strcpy(p->next->id,t);
                temp=p->age;
     			p->age=p->next->age;
				p->next->age=temp;
 			}
}
void main()
{
    int n,i,j;
	struct seqs *p,*px;
	scanf("%d",&n);
	p=build(n);
	px=rebuild(p);
	bubble(px,old);
    while(px!=NULL)//????
	{
		printf("%s\n",px->id);
		px=px->next;
	}	
	for(i=0;i<old;i++)
	    p=p->next;
    while(p!=NULL)//????
	{
		printf("%s\n",p->id);
		p=p->next;
	} 
	
	
}