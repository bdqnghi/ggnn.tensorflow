struct num
{
	char juzhen[20];
	struct num * next;
};
int main()
{
	struct num number[5],* head,* p;
	int l,m,i;
	char change[10];
	for(i=0;i<5;i++)
		gets(number[i].juzhen);
	scanf("%d%d",&l,&m);
    strcpy(change,number[l].juzhen);
    strcpy(number[l].juzhen,number[m].juzhen);
	strcpy(number[m].juzhen,change);
    head=&number[0];
	p=head;
	number[4].next=NULL;
	if(l>=5||m>=5)
		printf("error");
	else
	{

    for(i=0;i<4;i++)
		number[i].next=&number[i+1];
	do
	{   
		puts(p->juzhen);
		p=p->next;
	}while(p!=NULL);
	}
	return 0;
}