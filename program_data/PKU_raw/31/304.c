struct stu
{char a[100];
struct stu *next;
};
int main()
{struct stu *head,*p1,*p2;
head=(struct stu *)malloc(sizeof(struct stu));
p1=head;
p2=head;
p1->next=0;
    while(1)
{
    gets(p1->a);
    if(strcmp(p1->a,"end")==0)
    break;
    else
    head=p1;
    p1=(struct stu *)malloc(sizeof(struct stu));
  
   p1->next=p2;
   p2=p1;
}

p1=head;
while(1)
{
puts(p1->a);
if(p1->next==0)
break;
p1=p1->next;
}
  
   return 0;
}
