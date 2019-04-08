struct student
{
	char str[100];
    struct student *next;
	struct student *front;
};
struct student *create()
{
	struct student *head,*pf,*pa,*end;
	int n=1,flag=0;
	do
	{
		pa=(struct student *) malloc(LEN);
		gets(pa->str);
		if(strcmp(pa->str,"end")==0)
		{
			if(n==1) flag=1;
			break;
		}
		if(n==1)
		{
			head=pa;
			pf=pa;
			pa->front=NULL;
			n++;
		}
		else 
		{
			pf->next=pa;
			pa->front=pf;
			pf=pa;
		}
	 }while(n!=0);
	if(flag==0){pf->next=NULL;
	end=pf;}
	else{head=pa; end=NULL;}
    return(end);
}
int main()
{
	struct student *end,*pt;
	end=create();
	pt=end;
	while(pt!=NULL)
	{
		printf("%s\n",pt->str);
		pt=pt->front;
	}
	
	return 0;
}




