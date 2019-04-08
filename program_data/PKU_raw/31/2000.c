
struct node
{
	char str[100];
	struct node *next;
};

void main()
{
	struct node *head=NULL, *element;
	char str[100];
	gets(str);
	while(strcmp(str,"end"))
	{
		element=(struct node *)malloc(sizeof(struct node));
		strcpy(element->str,str);
		element->next=head;
		head=element;
		gets(str);
	}
	while(head!=NULL)
	{
		puts(head->str);
		head=head->next;
	}
}