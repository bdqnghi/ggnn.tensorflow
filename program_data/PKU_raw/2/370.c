struct a
{
	int book;
	char author[26];
	struct a *next;
};
struct a *creat(int m)
{
	int i=0;
	struct a *p,*head,*temp;
	head=NULL;
	do
	{
		p=(struct a *)malloc(sizeof(struct a));
			if(p==NULL){
			exit(1);
			}
			scanf("%d %s",&p->book,p->author);
			if(head==NULL){
			head=p;
			temp=p;}
			else{
				temp->next=p;
				temp=p;
			}
			i++;
	}while(i<m);
temp->next=NULL;
				return(head);
}
void main()
{
	int h,m,i,j,zimu[26]={0};
	struct a *head,*p;
	scanf("%d",&m);
	head=creat(m);
	p=head;
	for(i=0;i<m;i++)
	{
		for(j=0;j<26;j++){
			if(p->author[j]>='A'&&p->author[j]<='Z')
			{
		zimu[p->author[j]-'A']++;
			}
		}
		p=p->next;
	}
	h=0;
	for(i=0;i<26;i++)
	{
		if(zimu[i]>zimu[h])
			h=i;
	}
	printf("%c\n%d\n",'A'+h,zimu[h]);
	p=head;
		for(i=0;i<m;i++)
	{
		for(j=0;j<26;j++){
			if(p->author[j]=='A'+h)
			{
				printf("%d\n",p->book);
				break;
			}
		}
		p=p->next;
	}
}
