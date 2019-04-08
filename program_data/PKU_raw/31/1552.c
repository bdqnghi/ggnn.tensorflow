 
struct student
{ 
	char temp[50];
	struct student *previous;
};
void main()
{
	struct student *end,*head;
	struct student *p1,*p2, *p;
/*p1=(struct student *)malloc(LEN);*/
	p2=head=NULL;
	while(1)
	{
		p1=(struct student*)malloc(LEN);
		gets(p1->temp);
		if (strcmp(p1->temp,"end")==0)
		{
				/*delete p1;*/
			break;
		}
 
		if(head==NULL) {
			head=p1;
			head->previous=NULL;
		}
		else 
			p1->previous=p2;
		p2=p1;
	}
/*p1->previous=p2;*/
	p=p2;
	if(p!=NULL)
		while(p) {
			puts(p->temp);
			p=p->previous;
		}

}