struct book
{
	int num;
	char name[20];
	struct book *next;
};
int i,j,n,t,number[100],m;
struct book *creat(void)
{
	struct book *p1,*p2,*head;
    p1=p2=(struct book *)malloc(LEN);
	scanf("%d %s",&p1->num,p1->name);
	head=NULL;
	for(i=1;i<m;i++)
	{
		if(i==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct book *)malloc(LEN);
		scanf("%d %s",&p1->num,p1->name);
	}
	p2->next=p1;
	p2=p1;
	p2->next=NULL;
	return(head);
}
void main()
{
	scanf("%d",&m);
	struct book *creat(void);
	struct book *head,*p;
	int a[26]={0},max,maxindex=0;
	head=p=creat();
	char *pointer;
	do
	{
		for(pointer=p->name;*pointer!='\0';pointer++)
		{
			for(i=0;i<26;i++)
			{
				if(*pointer==65+i)
					a[i]++;
			}
		}
		p=p->next;
	}while(p!=NULL);
    max=a[0];
	for(i=1;i<26;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxindex=i;
		}
	}
	printf("%c\n%d\n",65+maxindex,a[maxindex]);	
	p=head;
	do
	{
		for(pointer=p->name;*pointer!='\0';pointer++)
		{
			if(*pointer==65+maxindex)
				printf("%d\n",p->num);
		}
		p=p->next;
	}while(p!=NULL);
}