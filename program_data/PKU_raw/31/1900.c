struct xs
{
    char num[10];
    char name[30],sex[2],adr[100],grade[20];
    int year;
    struct xs *next;
};
struct xs *creat()// ?0?7?0?9×?0?0·?0?4 ?0?3?0?1 NULL ?0?4?0?1?0?7à?0?6?0?0?0?8?0?5?0?8×?0?8?0?1?0?0· 
{
    struct xs *head,*p1,*p2;
    p1=p2=(struct xs *)malloc(LEN);
    head=NULL;
    p1->next=NULL;
    int n=0;
   while(1)
    {
        n++;
        scanf("%s",p1->num);
        if(strcmp(p1->num,"end")==0){
            if(n==1)return NULL;
            else break; 
        }    
        SCAN;
        if(n==1)head=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct xs*)malloc(LEN);
    }
    p2->next=NULL;
    return head;
}
void output(struct xs* head)//?0?8×?0?8?0?1?0?0·NULL ?0?8?0?1?0?6?0?2?0?3?0?1?0?6?0?8?0?3?0?5 
{
    struct xs *p=head;
    if(p==NULL)printf("\n");
    else do
    {
    printf("%s %s %s %d %s %s\n",p->num,p->name,p->sex,p->year,p->grade,p->adr);
    p=p->next;
    }
    while(p!=NULL);
}
struct xs * change(struct xs*head)//?0?8×?0?8?0?1?0?0· NULL ?0?3?0?1 NULL 
{
    struct xs *p1,*p2,*p3;
    if(head==0)
        return 0;
    p1=NULL;
    p2=head;
    p3=p2->next;
    while(1)
    {
         p2->next=p1;
         if(p3==NULL){
             
             head=p2;
             p2->next=p1;
             break;
         }
         else {
             p1=p2;
             p2=p3;
             p3=p3->next;
         }     
                  
    }
    return head;
}    
int main()
{
    struct xs *head;
    head=creat();
    head=change(head);
    output(head);
    getchar();
    getchar();
    return 0;
}
