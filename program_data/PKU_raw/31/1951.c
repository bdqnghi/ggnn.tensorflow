struct stu
{
char data[100];
struct stu *next;
};
void main()
{
struct stu *head;
struct stu *p1,*p2;
p1=(struct stu *)malloc(LEN);
p1->next=NULL;
gets(p1->data);
while(strcmp(p1->data,"end"))
{
 p2=(struct stu *)malloc(LEN);
 p2->next=p1;
 p1=p2;
 gets(p1->data);
}
head=p1->next;
for(p2=head;p2;p2=p2->next)
puts(p2->data);
}