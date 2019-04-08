
typedef struct node{
	char id[100],name[100],sex[2],address[100],age[10],grade[10];
	struct node *next;
}node;

node *head=NULL;

int create(){
	node *p = (node*)malloc(sizeof(node));
	scanf("%s",p->id);
	if(p->id[0]=='e'){free(p);return 1;}
	scanf("%s%s%s%s%s",p->name,p->sex,p->age,p->grade,p->address);

	p->next = head;
	head = p;
	return 0;
}
void print(){
	node *p = head,*temp;
	for(;p!=NULL;){
		printf("%s %s %s %s %s %s\n",p->id,p->name,p->sex,p->age,p->grade,p->address);
		temp = p;
		p = p->next;
		free(temp);
	}
}

int main()
{
	int i,j,n,m,k;
	for(;;){
		if(create()==1)break;
	}
	print();
}