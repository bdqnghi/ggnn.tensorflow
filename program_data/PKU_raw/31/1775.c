typedef struct Student
{
	char ALL[100];
	struct Student *pNext;
	struct Student *pPrev;
}Stu;
int main(void)
{
	Stu *pRoot=(Stu *)malloc(sizeof(Stu));
	Stu *pNow=pRoot;
	pRoot->pPrev=NULL;
	for(;;)
	{
		gets(pNow->ALL);
		if(strcmp("end",pNow->ALL))
		{
			pNow->pNext=(Stu *)malloc(sizeof(Stu));
			pNow->pNext->pPrev=pNow;
			pNow=pNow->pNext;
		}
		else break;
	}
	pNow=pNow->pPrev;
	for(;;)
	{
		puts(pNow->ALL);
		if(pNow->pPrev==NULL) break;
		pNow=pNow->pPrev;
	}
	return 0;
}