struct student 
{
    char id[50];
    char s[50];
    char sex;
    int age;
    char score[10];
    char add[20];
    struct student *po;
};
int main()
{
    struct student *p,*q;
    q=(struct student*)malloc(LEN);
    scanf("%s %s %c %d %s %s",q->id,q->s,&q->sex,&q->age,q->score,q->add);
    q->po=NULL;
    p=q;
    q=(struct student*)malloc(LEN);
    scanf("%s",q->id);
    while(strcmp(q->id,"end")!=0)
    {
     scanf("%s %c %d %s %s",q->s,&q->sex,&q->age,q->score,q->add);
     q->po=p;
     p=q;
     q=(struct student*)malloc(LEN);
     scanf("%s",q->id);
    }
    printf("%s %s %c %d %s %s\n",p->id,p->s,p->sex,p->age,p->score,p->add);
    while(p->po!=NULL)
    {
      p=p->po;
      printf("%s %s %c %d %s %s\n",p->id,p->s,p->sex,p->age,p->score,p->add);
    } 
    return 0;
}