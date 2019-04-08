struct patient
{
	char id[10];
	int age;
	struct patient * next;
};
int n;
struct patient * creat(int x)
{
	struct patient * head;
	struct patient *p1,*p2;
	n=0;
	p1=p2=(struct patient *)malloc(LEN);
	scanf("%s %d\n",p1->id,&p1->age);
	head=NULL;
	while(n!=x)
	{
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct patient *)malloc(LEN);
        scanf("%s %d\n",p1->id,&p1->age);
	}
	p2->next=NULL;
	return(head);
}
void main()
{
    int m,i,j,v,t,*b;
	struct patient *head,*p1;
	b=(int*)malloc(100*sizeof(int));
    scanf("%d\n",&m);
	head=creat(m);
	p1=head;
	for(i=0;i<m;i++) {*(b+i)=p1->age;p1=p1->next;}
	for(j=0;j<m-1;j++)
	   for(i=0;i<m-1-j;i++) 
		   if(*(b+i)<*(b+i+1))
		   {t=*(b+i);*(b+i)=*(b+i+1);*(b+i+1)=t;}
    for(i=0;i<m;i++) if(*(b+i)<60) {v=i;break;}
	p1=head;
	for(j=0;j<v;j++)
	{
		p1=head;
		while(p1!=NULL)
		{
			if(p1->age==*(b+j) && (j==0 || *(b+j)!=*(b+j-1))) printf("%s\n",p1->id);
			p1=p1->next;
		}
	}
	p1=head;
	while(p1 != NULL) 
	{
		if(p1->age<60) printf("%s\n",p1->id);
		p1=p1->next;
	}
}