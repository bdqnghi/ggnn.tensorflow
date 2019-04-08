struct student
{
	char info[50];
	struct student *p;
};
void main()
{
	int m,n,i,j;
	struct student *p,*head;
    for(i=0;;i++)
	{
		p=DT;
		if(i==0)
		  p->p=NULL;
		gets(p->info);
		if(strcmp(p->info,"end")==0)
			break;
		p->p=head;
		head=p;
	}
    for(p=head,j=0;j<i;j++,p=p->p)
	{
		puts(p->info);
	}
}


