struct student
{
    char num[20];
    char name[20];
    char gender;
    int age;
    char score[20];
    char add[200];
    struct student *prev;
    struct student *next;//????????????
}*head=0,*tail=0;
void add_node(char*a,char*b,char c,int d,char* e,char* f)
{
    if(head==0)
	{
        head=tail=(struct student*)malloc(sizeof(struct student));//???????
        tail->next=tail->prev=0;
    }

    else
	{
        struct student *tmp=tail;
        tail=tail->next=(struct student*)malloc(sizeof(struct student));
        tail->prev=tmp;
        tail->next=0;
    }

    strcpy(tail->num,a);
    strcpy(tail->name,b);
	strcpy(tail->add,f);
    strcpy(tail->score,e);
    tail->gender=c;
    tail->age=d;
}

void print()//????????
{
    while(tail)
	{
        printf("%s %s %c %d %s %s\n",tail->num,tail->name,tail->gender,tail->age,tail->score,tail->add);
        tail=tail->prev;
    }
}

int main()
{
    char a[20];
    char b[20];
    char c;
    int d;
    char e[20];
    char f[200];
	scanf("%s",a);
	while(strcmp(a,"end"))
	{
        scanf("%s %c %d %s %s",b,&c,&d,e,f);
        add_node(a,b,c,d,e,f);
        scanf("%s",a);
    }
	print();
	return 0;
}