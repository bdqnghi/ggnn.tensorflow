struct student
{
    char str[50];
    struct student *next;
};
int n;
struct student *creat()
{
    struct student *head, *temp, *end;
    head = end = temp = (struct student*) malloc(LEN);
    gets(temp->str);
    while (temp->str[0] != 'e')
    {
        temp->next = head;
        head = temp;
        temp = (struct student*) malloc(LEN);
        gets(temp->str);
    }
    end->next = NULL;
    return (head);
}
void print(struct student *head)
{
    struct student *p;
    p = head;
    while (p != NULL)
    {
        puts(p->str);
        p = p->next;
    }
}
void main()
{
    struct student *head;
    head = creat();
    print(head);
}