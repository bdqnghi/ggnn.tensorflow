struct tushu 
{
	int num;
	char name[20];
	struct tushu *next;
};
struct tushu *creat(int m)
{
	struct tushu *head,*p1,*p2;
	p1=p2=(struct tushu *)malloc(LEN);
	scanf("%d%s",&p1->num,p1->name);
	head=p1;
	int i;
	for(i=2;i<=m;i++)
	{
		p1=(struct tushu *)malloc(LEN);
        scanf("%d%s",&p1->num,p1->name);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return(head);
}
int main()
{
	int m,num[26]={0},i,max;
	scanf("%d",&m);
	struct tushu *head,*p1;
	head=creat(m);
	char *x;
	for(i=0;i<26;i++)
	{
		p1=head;
		x=p1->name;
		while(p1!=NULL)
		{
			while(*x!='\0')
			{
				if(*x==(i+65))
					num[i]=num[i]+1;
				x=x+1;
			}
			p1=p1->next;
			x=p1->name;
		}
	}
	max=0;
	for(i=1;i<26;i++)
	{
		if(num[max]<num[i])
			max=i;
	}
	printf("%c\n",max+65);
	printf("%d\n",num[max]);
	p1=head;
	x=p1->name;
	while(p1!=NULL)
	{
		while(*x!='\0')
		{
			if(*x==(max+65))
			{
				printf("%d\n",p1->num);
				break;
			}
			x=x+1;
		}
		p1=p1->next;
		x=p1->name;
	}
	return 0;
}