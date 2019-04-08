struct student
{
       char num[20];
       char name[20];
       char ch[1];
       int ye;char gra[10];char add[20];
       struct student *next; 
};
int main()
{
    struct student *p,*p1,*p2;
    int n;
    p1=p2=(struct student*) malloc(LEN);
    scanf("%s",&p1->num);
    p=NULL;n=0;
    while (p1->num[0]!='e')    
    {
          scanf("%s%s%d%s%s",&p1->name,&p1->ch,&p1->ye,&p1->gra,&p1->add);
          n++;if (n==1) p2=p1;
          else p1->next=p2;
          p=p1;p2=p1;
          p1=(struct student *)malloc(LEN);
          scanf("%s",&p1->num);
    }
    if (p!=NULL)
    do
    {
      printf("%s %s %s %d %s %s\n",p->num,p->name,p->ch,p->ye,p->gra,p->add);
      p=p->next;     
                }while (p!=NULL);

}
