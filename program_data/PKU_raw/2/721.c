struct book 
{
	int num;
	char edit[26];
	struct book *next;
};
int m;
struct book *head,*p1,*p2;

struct book *creat(void)
{
	p1=(struct book*)malloc(len);
	scanf("%d %s",&p1->num,p1->edit);
	head=p1;
	p2=p1;
	m=m-1;
	do
	{
		p1=(struct book*)malloc(len);
        scanf("%d %s",&p1->num,p1->edit);
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
		m=m-1;
	}while(m);
	return(head);
}


void main()
{
    int max=0,i=0,j,k[26]={0};
	struct book *head,*p;
    scanf("%d",&m);
	head=creat();
	for(p=head;p!=NULL;)
	{
		for(i=0;p->edit[i]!=0;i++)
			k[(p->edit[i])-65]+=1;
		p=p->next;
	}
    for(i=0;i<26;i++)
		if(k[i]>max) {max=k[i];j=i;}
	printf("%c\n%d\n",j+65,max);
    for(p=head;p!=NULL;)
	{
		for(i=0;p->edit[i]!=0;i++)
			if(p->edit[i]==j+65) printf("%d\n",p->num);
		p=p->next;
	}

}
