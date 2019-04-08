			
struct Student 
{ 
    char id[100]; 
    char name[300]; 
    int age; 
    char sex;                
    char score[100];
    char address[300];
    struct Student *before;
}s[2500];

main()
{
	struct Student *p,*q,*head;
	int i=0,j,k,n,m;
	scanf("%s",&s[0].id);
	p=&s[0];
	q=NULL;
	while (p!=NULL)
	{
		
		scanf("%s %c%d%s%s",p->name,&p->sex,&p->age,p->score,p->address);
		p->before=q;
		q=p;
		scanf("%s",&s[i+1].id);
		if (strcmp(s[i+1].id,"end")==0)
		{
			p=NULL;
			head=q;
		}
		else {
		p=&s[i+1];
		i++;
		}
	}
	p=head;q=NULL;
	while(p!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p->id,p->name,p->sex,p->age,p->score,p->address);
		p=p->before;
	}
	
}