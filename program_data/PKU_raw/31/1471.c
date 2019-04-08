struct student
{
	char information[100];
	struct student *previous;
};

void main()
{
	struct student *p1,*p2,*p;
	p1=z;
	p1->previous=NULL;
	gets(p1->information);
	do{
		p2=z;//???p1,p2??????????????
		p2->previous=p1;
		p1=p2;
     	gets(p2->information);
	} while(strcmp(p1->information,"end"));
	p1=p1->previous;
	for(p=p1;p;p=p->previous)
	    puts(p->information);
}
