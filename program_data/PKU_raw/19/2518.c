// Program Test.cpp : ??????????????
//

struct Vocabulary
{
	char character[Vocabularysize];
	struct Vocabulary *next;
};
int n=0;
char str[Sentencelength];
struct Vocabulary* create()
{
	int i;
	struct Vocabulary*head;
	struct Vocabulary *p1,*p2;
	n=0;
	int k=0,l=0;
	p1=p2=(struct Vocabulary*)malloc(sizeof(struct Vocabulary));//?????????
	for(l=k;str[l]!=' ';l++);
	for(i=k;i<l;i++)p1->character[i]=str[i];
	p1->character[i]='\0';
	k=l+1;
	i=0;
	head=NULL;
	
	while(str[i]!='\0')
	{
		n=n+1;//?????????????????????
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct Vocabulary *)malloc(sizeof(struct Vocabulary));
	
		if(str[l]!='\0')
		{	for(l=k;str[l]!=' '&&l<=strlen(str)-1;l++);
			int m;
			for(i=k,m=0;i<l;i++,m++)p1->character[m]=str[i];
			p1->character[m]='\0';//copy the character
			k=l+1;
		}
		else i=l;
	}

	p2->next=p1;
	p2=p1;
	p2->next=NULL;

return (head);
}

void print(struct Vocabulary *head)
{
	struct Vocabulary*p;
	p=head;
	for(p=head;p->next!=NULL;p=p->next)
		printf("%s ",p->character);
	printf("%s\n",p->character);
	

}
int main()
{
	struct Vocabulary *head;
	gets(str);
//
	char stra[Sentencelength],strb[Sentencelength];
	gets(stra);
	gets(strb);
//
	head=create();
	struct Vocabulary *p=head;

	for(p=head;p!=NULL;p=p->next)
	{
//
		if(strcmp(p->character,stra)==0)
			strcpy(p->character,strb);
	
	
	}
	print(head);
	return 0;
}
