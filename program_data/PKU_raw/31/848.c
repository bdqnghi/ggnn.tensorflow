struct stu
{
       char num[40];
       char name[40];
       char sex[10];
       char year[10];
       char score[40];
       char add[40];
       struct stu *fw;
       struct stu *bw;
};
int n;
struct stu *tail;
struct stu *create(void)
{
      int i;
      struct stu *head,*p1,*p2;
      head=(struct stu *)malloc(sizeof(struct stu));
      head->fw=NULL;
      head->bw=NULL;  
      p2=head;      
      while(1)
      {
             p1=(struct stu *)malloc(sizeof(struct stu));
             scanf("%s",p1->num);
             if(strcmp(p1->num,"end")==0)
             {
                  p1->fw=NULL;
                  p2->fw=p1;
                  p1->bw=p2;
                  tail=p1;
                  break;
             }
             else
             {
                  scanf("%s %s %s %s %s",p1->name,&p1->sex,&p1->year,p1->score,p1->add);
                  p1->fw=NULL;
                  p2->fw=p1;
                  p1->bw=p2;
                  p2=p1;            
             }
      } 
      return head;     
}
void bwprint(struct stu *ptail)
{
     struct stu *p;
     p=ptail->bw;     
     while(p->bw!=NULL)
       {
            
            printf("%s %s %s %s %s %s\n",p->num,p->name,p->sex,p->year,p->score,p->add);
            p=p->bw;      
       }
       
}
main()
{
     int k=0;
     stu *p1;
     struct stu *pheader;
     pheader=create();
     bwprint(tail);
     
}
