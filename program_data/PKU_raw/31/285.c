struct	STUDENT
{
 char student[100];
	struct STUDENT*	former;
};
int main()
{
	struct STUDENT*	p1 = (struct STUDENT*) malloc(sizeof(struct STUDENT));
	struct STUDENT*	p2;
	p1->former = NULL;
	for (gets(p1->student);p1->student[0]!='e'; gets(p1->student))
	{
		p2 = p1;
		p1 = (struct STUDENT*) malloc(sizeof(struct STUDENT));
		p1->former = p2;
	}
	for (p1=p1->former; p1!=NULL; p1=p1->former)
	{
		printf("%s\n", p1->student);
	}
	return 0;
}
