struct link
{
	char a[10][100];
	struct link *next;
};
struct link *now,*past;
int i,n=1;
void build()
{
	while (1)
	{
	now=(struct link*)malloc(sizeof(struct link));
	scanf("%s",now->a[0]);
	if (strcmp(now->a[0],"end")==0) return;
	for (i=1;i<6;i++)
		scanf("%s",now->a[i]);
	if (n==1)
	{
		now->next=NULL;
	} else now->next=past;
	past=now;
	n++;
	}
}
void main()
{
	build();
	now=past;
	while (now!=NULL)
	{
		printf("%s",now->a[0]);
		for (i=1;i<6;i++)
			printf(" %s",now->a[i]);
		printf("\n");
		now=now->next;
	}
}