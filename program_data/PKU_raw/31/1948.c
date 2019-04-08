struct student
{
 char xuehao[20];
 char name[30];
 char sex;
 int age;
 char score[20];
 char adress[40];
 struct student *next;
};
void insert (struct student *pheader)
{
 struct student *p;
 p=(struct student *)malloc(sizeof(struct student));
 p->next=pheader->next;
 pheader->next=p;
}
main()
{
 struct student *pheader,*p;
 pheader=(struct student *)malloc(sizeof(struct student));
 pheader->next=NULL;
 while(9)
 {
  insert(pheader);
  scanf("%s",pheader->next->xuehao);
  if(pheader->next->xuehao[0]=='e')
    break;
  scanf("%s %c %d %s %s",pheader->next->name,&pheader->next->sex,&pheader->next->age,&pheader->next->score,pheader->next->adress);
 }
 p=pheader->next;
 while(9)
 {
   p=p->next;
   printf("%s %s %c %d %s %s\n",p->xuehao,p->name,p->sex,p->age,p->score,p->adress);
   if(p->next==NULL)
     break;
 }
 while(9){
 if(pheader->next->next==NULL)
   break;
 p=pheader->next;
 pheader->next=p->next;
 free(p);}
 free(pheader->next);
 free(pheader);
}


