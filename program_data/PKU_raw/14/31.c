
// ??????????

struct record
{
	int stuID;
	short YuWen;
	short math;
	short total;
};

struct YyxNode
{
	struct record m_rec;
	struct YyxNode *next;
};

struct YyxLink
{
	int n;
	struct YyxNode *head;
	struct YyxNode *tail;
};

struct YyxLink *CreateNewLink()
{
	struct YyxLink *newLn;
	if((newLn=(struct YyxLink*)malloc(sizeof(struct YyxLink)))==NULL){
		printf("Error: memory out! (1)\n");
		exit(-1);
	}
	newLn->n = 0;
	newLn->head = NULL;
	newLn->tail = NULL;

	return newLn;
}

struct YyxLink *AddNode(struct YyxLink *ln, const struct record *rec)
{
	struct YyxNode *newNode;
	if((newNode=(struct YyxNode*)malloc(sizeof(struct YyxNode)))==NULL){
		printf("Error: memory out! (2)\n");
		exit(-1);
	}
	newNode->m_rec = *rec;
	newNode->next = NULL;
	if(ln->n==0){
		ln->head = newNode;
		ln->tail = newNode;
	}else{
		ln->tail->next = newNode;
		ln->tail = newNode;
	}
	ln->n ++;

	return ln;
}

int myCompare(const struct record *rec1, const struct record *rec2)
{
	return rec2->total - rec1->total;
}

struct YyxNode *Search(struct YyxLink *ln, const struct record *rec)
{
	struct YyxNode *nd = ln->head;
	while(nd!=NULL && myCompare(&nd->m_rec, rec))
		nd = nd->next;
	
	return nd;
}

struct YyxLink *ClearLink(struct YyxLink *ln)
{
	struct YyxNode *delNode = ln->head;
	struct YyxNode *nextNode;
	while(delNode != NULL){
		nextNode = delNode->next;
		free(delNode);
		delNode = nextNode;
	}
	ln->n = 0;
	ln->head = NULL;
	ln->tail = NULL;

	return ln;
}

int main()
{
	struct YyxLink *mainLn;
	struct record stu;
	int n;
	int i;
	struct record *max1, *max2, *max3;
	struct YyxNode *temp;
	mainLn = CreateNewLink();
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d %d", &stu.stuID, 
			&stu.YuWen, &stu.math);
		stu.total = stu.YuWen + stu.math;
		AddNode(mainLn, &stu);
	}
	
	max1=max2=max3= &mainLn->head->m_rec;
	temp = mainLn->head;
	while(temp!=NULL){
		if(max1->total<temp->m_rec.total)
			max1 = &temp->m_rec;
		temp = temp->next;
	}
	temp = mainLn->head;
	if (max2==max1){
		temp = mainLn->head->next;
		max2 = &temp->m_rec;
	}
	while(temp!=NULL){
		if(max2->total<temp->m_rec.total)
			if(max1!=&temp->m_rec)
				max2 = &temp->m_rec;
		temp = temp->next;
	}
	temp = mainLn->head;
	while(&temp->m_rec==max1||&temp->m_rec==max2)
		temp = temp->next;
	max3 = &temp->m_rec;
	while(temp!=NULL){
		if(max3->total<temp->m_rec.total)
			if(max1!=&temp->m_rec&&max2!=&temp->m_rec)
			max3 = &temp->m_rec;
		temp = temp->next;
	}

	printf("%d %d\n", max1->stuID, max1->total);
	printf("%d %d\n", max2->stuID, max2->total);
	printf("%d %d\n", max3->stuID, max3->total);

//	getchar();getchar();getchar();
	free(ClearLink(mainLn));

	return 0;
}
