
// ???????????????

struct record
{
	char str[100];
};

struct YyxNode
{
	struct record m_rec;
	struct YyxNode *next;
};

struct YyxStack
{
	int n;
	struct YyxNode *top;
};

struct YyxStack *CreateNewStack()
{
	struct YyxStack *newSt;
	if((newSt=(struct YyxStack*)malloc(sizeof(struct YyxStack)))==NULL){
		printf("Error: memory out! (1)\n");
		exit(-1);
	}
	newSt->n = 0;
	newSt->top = NULL;

	return newSt;
}

struct YyxStack *Push(struct YyxStack *st, const struct record *rec)
{
	struct YyxNode *newNode;
	if((newNode=(struct YyxNode*)malloc(sizeof(struct YyxNode)))==NULL){
		printf("Error: memory out! (2)\n");
		exit(-1);
	}
	newNode->m_rec = *rec;
	newNode->next = st->top;
	st->top = newNode;
	st->n ++;

	return st;
}

struct YyxStack *Top(struct YyxStack *st, struct record *rec)
{
	*rec = st->top->m_rec;

	return st;
}

struct YyxStack *Pop(struct YyxStack *st)
{
	struct YyxNode *delNode = st->top;
	if (delNode==NULL)
		return st;
	st->top = delNode->next;
	st->n --;

	free(delNode);

	return st;
}

struct YyxStack *ClearStack(struct YyxStack *st)
{
	while(st->top!=NULL)
		Pop(st);

	return st;
}

int main()
{
	struct YyxStack *mainSt;
	struct record stu;
	mainSt = CreateNewStack();
	gets(stu.str);
	while(strcmp(stu.str, "end")){
		Push(mainSt, &stu);
		gets(stu.str);		
	}
	while(mainSt->n>0){
		Pop(Top(mainSt, &stu));
		puts(stu.str);
	}

//	free(ClearStack(mainSt));

	return 0;
}
