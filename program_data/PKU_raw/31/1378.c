struct Student
{
    char num[41];
    char name[41];
    char gender[5];
    int age;
    char score[10];
    char address[41];
    struct  Student * next;
    struct  Student * pre;
};
int size=sizeof(struct Student);
struct Student gan;
void push ()
{
    char ster[41];struct Student * pt;
    scanf("%s",ster); 
    while(strcmp(ster,"end")!=0)
    {
        pt=malloc(size);
        strcpy(pt->num,ster);
        scanf("%s %s %d %s %s",pt->name,pt->gender,&pt->age,pt->score,pt->address);
        (gan.pre)->next=pt;//????????????next? 
        pt->pre=gan.pre;//????????????pre? 
        gan.pre=pt;//?????????????? 
        pt->next=&gan;//??????? 
        scanf("%s",ster);
    }
}
void display(struct Student stu)
{
    printf("%s %s %s %d %s %s\n",stu.num,stu.name,stu.gender,stu.age,stu.score,stu.address);
}
int main()
{
    gan.next=&gan;
    gan.pre=&gan;
    push();
    struct  Student * pt;
    pt=gan.pre;
    while(pt!=&gan)
    {
        display(*pt);
        pt=pt->pre;
    }
    return 0;
}
